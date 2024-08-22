// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RPBROADCASTMP4CLIPHANDLER_H
#define RPBROADCASTMP4CLIPHANDLER_H



#import "RPBroadcastHandler.h"

@interface RPBroadcastMP4ClipHandler : RPBroadcastHandler



-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)finishedProcessingMP4ClipWithUpdatedBroadcastConfiguration:(id)arg0 error:(id)arg1 ;
-(void)processMP4ClipWithURL:(id)arg0 setupInfo:(id)arg1 finished:(BOOL)arg2 ;


@end


#endif