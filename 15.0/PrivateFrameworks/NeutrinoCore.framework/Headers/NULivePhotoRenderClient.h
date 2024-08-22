// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NULIVEPHOTORENDERCLIENT_H
#define NULIVEPHOTORENDERCLIENT_H



#import "NURenderClient.h"

@interface NULivePhotoRenderClient : NURenderClient



-(id)initWithName:(id)arg0 responseQueue:(id)arg1 ;
-(void)setCompletionBlock:(id)arg0 ;
-(void)submitGenericRequest:(id)arg0 completion:(id)arg1 ;
-(void)submitRequest:(id)arg0 ;


@end


#endif