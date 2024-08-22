// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUIMAGEPROPERTIESREQUEST_H
#define NUIMAGEPROPERTIESREQUEST_H



#import "NURenderRequest.h"

@interface NUImagePropertiesRequest : NURenderRequest



-(NSInteger)mediaComponentType;
-(id)newRenderJob;
-(id)submitSynchronous:(*id)arg0 ;
-(void)submit:(id)arg0 ;


@end


#endif