// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCONTACTLABELEDVALUE_H
#define WFCONTACTLABELEDVALUE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WFContactLabeledValue : NSObject

@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) id *value; // ivar: _value


+(id)labeledValueWithLabel:(id)arg0 value:(id)arg1 ;
+(id)localizedStringForLabel:(id)arg0 ;
-(id)description;
-(id)initWithLabel:(id)arg0 value:(id)arg1 ;


@end


#endif