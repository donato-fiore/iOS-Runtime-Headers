// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACTIONPARAMETER_H
#define ACTIONPARAMETER_H

@class INObject, NSString;



@interface ActionParameter : INObject

@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *value;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif