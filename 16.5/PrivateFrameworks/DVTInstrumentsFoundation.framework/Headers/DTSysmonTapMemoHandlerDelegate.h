// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTSYSMONTAPMEMOHANDLERDELEGATE_H
#define DTSYSMONTAPMEMOHANDLERDELEGATE_H

@class NSString;
@protocol DTTapMemoHandlerDelegate;

#import <Foundation/Foundation.h>

#import "DTSysmonTapRecordDecoder.h"

@interface DTSysmonTapMemoHandlerDelegate : NSObject <DTTapMemoHandlerDelegate>

 {
    DTSysmonTapRecordDecoder *_recordDecoder;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)peekAtMemo:(id)arg0 ;
-(void)sendDataMemo:(id)arg0 toBulkReceiver:(id)arg1 ;
-(void)sendDataMemo:(id)arg0 toClientUsingConfig:(id)arg1 ;
-(void)sendHeartbeatMemo:(id)arg0 toClientUsingConfig:(id)arg1 ;


@end


#endif