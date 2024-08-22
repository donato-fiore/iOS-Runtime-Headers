// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ININTENTEXECUTIONRESULT_H
#define ININTENTEXECUTIONRESULT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INIntent.h"
#import "INIntentResponse.h"

@interface INIntentExecutionResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) INIntent *intent; // ivar: _intent
@property (readonly, nonatomic) INIntentResponse *intentResponse; // ivar: _intentResponse


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_dictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIntent:(id)arg0 response:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif