// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CVAPHOTOEXCEPTIONMETALRESOURCEUNAVAILABLE_H
#define CVAPHOTOEXCEPTIONMETALRESOURCEUNAVAILABLE_H



#import "CVAPhotoExceptionBase.h"

@interface CVAPhotoExceptionMetalResourceUnavailable : CVAPhotoExceptionBase



+(id)error;
+(id)throwIfNil:(id)arg0 ;
-(id)getReasonStr;
-(id)init;
-(int)getErrorCode;


@end


#endif