// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UTSSEARCHPARAM_H
#define UTSSEARCHPARAM_H

@class INObject, NSString, NSArray;



@interface UtsSearchParam : INObject

@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSArray *values;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif