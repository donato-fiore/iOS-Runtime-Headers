// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIGCROP_H
#define SIGCROP_H


#import <Foundation/Foundation.h>


@interface SigCrop : NSObject



+(BOOL)ConvertException:(struct exception *)arg0 toError:(*id)arg1 ;
+(BOOL)ConvertSystemError:(struct system_error *)arg0 toError:(*id)arg1 ;
+(BOOL)FillUnknownError:(*id)arg0 ;
+(CGFloat)getSampleLength:(id)arg0 error:(*id)arg1 ;
+(id)cropSignature:(id)arg0 atPosition:(CGFloat)arg1 withLength:(CGFloat)arg2 error:(*id)arg3 ;


@end


#endif