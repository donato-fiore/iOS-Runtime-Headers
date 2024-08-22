// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNLABELVALUEPAIR_H
#define CNLABELVALUEPAIR_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CNLabelValuePair : NSObject <NSCopying>



@property (readonly) NSString *label; // ivar: _label
@property (readonly) id *value; // ivar: _value


+(id)labeledValueWithLabel:(id)arg0 value:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithLabel:(id)arg0 value:(id)arg1 ;


@end


#endif