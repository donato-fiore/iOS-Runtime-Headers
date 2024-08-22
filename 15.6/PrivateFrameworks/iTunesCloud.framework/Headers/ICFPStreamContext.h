// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICFPSTREAMCONTEXT_H
#define ICFPSTREAMCONTEXT_H

@class NSData;

#import <Foundation/Foundation.h>


@interface ICFPStreamContext : NSObject {
    *FPStreamOpaque_ _fpStreamRef;
}


@property (readonly, nonatomic) NSUInteger accountID; // ivar: _accountID
@property (readonly, copy, nonatomic) NSData *playerInfoContextRequestData; // ivar: _playerInfoContextRequestData


-(BOOL)getPlayerDelegateInfoDataUsingPlayerDelegateInfoResponseData:(id)arg0 returningData:(*id)arg1 error:(*id)arg2 ;
-(BOOL)getStreamerInfoContextDataUsingPlayerInfoContextData:(id)arg0 returningData:(*id)arg1 error:(*id)arg2 ;
-(id)initWithVersion:(unsigned int)arg0 contextID:(unsigned int)arg1 contentInfo:(id)arg2 returningError:(*id)arg3 ;
-(void)dealloc;


@end


#endif