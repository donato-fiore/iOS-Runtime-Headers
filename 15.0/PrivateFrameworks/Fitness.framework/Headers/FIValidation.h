// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIVALIDATION_H
#define FIVALIDATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FIValidation : NSObject

@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) id *test; // ivar: _test


+(BOOL)performValidations:(id)arg0 withObject:(id)arg1 error:(*id)arg2 ;
+(id)validationWithName:(id)arg0 test:(id)arg1 ;
-(BOOL)validateObject:(id)arg0 withError:(*id)arg1 ;


@end


#endif