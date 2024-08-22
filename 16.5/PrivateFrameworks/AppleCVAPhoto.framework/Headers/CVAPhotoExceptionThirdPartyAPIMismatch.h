// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CVAPHOTOEXCEPTIONTHIRDPARTYAPIMISMATCH_H
#define CVAPHOTOEXCEPTIONTHIRDPARTYAPIMISMATCH_H

@class NSString;


#import "CVAPhotoExceptionBase.h"

@interface CVAPhotoExceptionThirdPartyAPIMismatch : CVAPhotoExceptionBase {
    NSString *reasonStr;
}




-(id)getReasonStr;
-(id)initWithReason:(id)arg0 ;
-(int)getErrorCode;


@end


#endif