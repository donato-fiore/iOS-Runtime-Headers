// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PHVALIDATION_H
#define _PHVALIDATION_H

@class NSError;

#import <Foundation/Foundation.h>


@interface _PHValidation : NSObject {
    NSUInteger _requestedOptions;
    NSUInteger _validatedOptions;
    NSError *_error;
}




-(BOOL)isValid:(*id)arg0 ;
-(id)initWithOptions:(NSUInteger)arg0 ;
-(void)assert:(BOOL)arg0 code:(NSInteger)arg1 format:(id)arg2 ;
-(void)assert:(BOOL)arg0 error:(id)arg1 ;
-(void)validateOption:(NSUInteger)arg0 usingBlock:(id)arg1 ;


@end


#endif