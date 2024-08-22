// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUGGESTION_H
#define SUGGESTION_H

@class INObject, NSString, NSArray;



@interface Suggestion : INObject

@property (nonatomic, copy) NSString *actionIdentifier;
@property (nonatomic, copy) NSArray *parameters;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif