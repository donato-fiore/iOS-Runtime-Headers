// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRSMUTABLEPOSTERDESCRIPTOR_H
#define PRSMUTABLEPOSTERDESCRIPTOR_H



#import "PRSPosterDescriptor.h"

@interface PRSMutablePosterDescriptor : PRSPosterDescriptor



+(id)mutableDescriptorWithIdentifier:(id)arg0 ;
-(BOOL)storeGalleryOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)storeUserInfo:(id)arg0 error:(*id)arg1 ;


@end


#endif