// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSTARGETINGVALIDATION_H
#define TPSTARGETINGVALIDATION_H

@class NSString, NSDictionary;
@protocol TPSValidatable;

#import <Foundation/Foundation.h>


@interface TPSTargetingValidation : NSObject <TPSValidatable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL ignoreCache; // ivar: _ignoreCache
@property (nonatomic) NSInteger joinType; // ivar: _joinType
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *targetContext; // ivar: _targetContext


-(BOOL)boolValue;
-(NSInteger)integerValue;
-(NSUInteger)unsignedIntegerValue;
-(id)arrayValue;
-(id)initWithTargetContext:(id)arg0 ;
-(id)key;
-(id)stringValue;
-(id)value;
-(void)cancel;
-(void)validateWithCompletion:(id)arg0 ;


@end


#endif