// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSCANCHANNEL_H
#define WFSCANCHANNEL_H

@class NSString;
@protocol WFScanableChannel;

#import <Foundation/Foundation.h>


@interface WFScanChannel : NSObject <WFScanableChannel>



@property (nonatomic) NSUInteger channel; // ivar: _channel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger flags; // ivar: _flags
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithChannel:(NSInteger)arg0 flags:(NSInteger)arg1 ;


@end


#endif