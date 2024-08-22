// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUVIDEOATTRIBUTESREQUEST_H
#define NUVIDEOATTRIBUTESREQUEST_H



#import "NURenderRequest.h"

@interface NUVideoAttributesRequest : NURenderRequest



-(NSInteger)mediaComponentType;
-(id)newRenderJob;
-(id)submitSynchronous:(*id)arg0 ;
-(void)submit:(id)arg0 ;


@end


#endif