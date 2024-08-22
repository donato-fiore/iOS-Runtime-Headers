// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXBLOCKCOMPONENTINSERTIONCACHEVALIDATOR_H
#define SXBLOCKCOMPONENTINSERTIONCACHEVALIDATOR_H

@class NSString;
@protocol SXComponentInsertionCacheValidator;

#import <Foundation/Foundation.h>


@interface SXBlockComponentInsertionCacheValidator : NSObject <SXComponentInsertionCacheValidator>



@property (readonly, nonatomic) id *block; // ivar: _block
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)validatorWithBlock:(id)arg0 ;
-(BOOL)validateCache:(id)arg0 DOMObjectProvider:(id)arg1 ;


@end


#endif