// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSUSERTYPESVALIDATION_H
#define TPSUSERTYPESVALIDATION_H

@class NSArray;


#import "TPSInclusivityValidation.h"

@interface TPSUserTypesValidation : TPSInclusivityValidation

@property (readonly, nonatomic) NSArray *excludeUserTypes;
@property (readonly, nonatomic) NSArray *targetUserTypes;


-(id)initWithTargetUserTypes:(id)arg0 excludeUserTypes:(id)arg1 ;
-(void)validateWithCompletion:(id)arg0 ;


@end


#endif