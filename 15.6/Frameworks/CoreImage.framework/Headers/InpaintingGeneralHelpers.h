// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INPAINTINGGENERALHELPERS_H
#define INPAINTINGGENERALHELPERS_H


#import <Foundation/Foundation.h>


@interface InpaintingGeneralHelpers : NSObject



+(BOOL)fillError:(*id)arg0 withErrorWithCode:(NSInteger)arg1 message:(id)arg2 underlyingError:(id)arg3 ;
+(BOOL)fillError:(*id)arg0 withGeneralErrorWithMessage:(id)arg1 ;
+(id)URLForResource:(id)arg0 ofType:(id)arg1 error:(*id)arg2 ;
+(id)errorWithCode:(NSInteger)arg0 message:(id)arg1 underlyingError:(id)arg2 ;
+(id)generalErrorWithMessage:(id)arg0 ;
+(id)getMainBundleUsingError:(*id)arg0 ;
+(id)pathForResource:(id)arg0 ofType:(id)arg1 error:(*id)arg2 ;
+(id)pathForResourceWithFilename:(id)arg0 error:(*id)arg1 ;
+(id)stringFromCGRect:(struct CGRect )arg0 ;


@end


#endif