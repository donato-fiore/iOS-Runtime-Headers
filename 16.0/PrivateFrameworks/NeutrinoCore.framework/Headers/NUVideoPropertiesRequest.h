// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUVIDEOPROPERTIESREQUEST_H
#define NUVIDEOPROPERTIESREQUEST_H



#import "NURenderRequest.h"

@interface NUVideoPropertiesRequest : NURenderRequest



-(NSInteger)mediaComponentType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)newRenderJob;
-(id)submitSynchronous:(*id)arg0 ;
-(void)submit:(id)arg0 ;


@end


#endif