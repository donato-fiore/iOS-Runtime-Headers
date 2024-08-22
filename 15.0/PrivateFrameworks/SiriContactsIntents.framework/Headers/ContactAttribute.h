// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CONTACTATTRIBUTE_H
#define CONTACTATTRIBUTE_H

@class INObject, NSString;


#import "AgeDateTime.h"

@interface ContactAttribute : INObject

@property (nonatomic, retain) AgeDateTime *ageDateTime;
@property (nonatomic) NSInteger contactAttributeType;
@property (nonatomic, copy) NSString *handleLabel;
@property (nonatomic, copy) NSString *handleValue;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif