// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAUICONFIRMATIONOPTION_H
#define SAUICONFIRMATIONOPTION_H

@class NSArray, NSString, NSNumber;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAUIConfirmationOption : AceObject <SAAceSerializable>



@property (nonatomic) BOOL active;
@property (copy, nonatomic) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *iconLabel;
@property (copy, nonatomic) NSString *iconType;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *speechDuration;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *type;


+(id)confirmationOption;
+(id)confirmationOptionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif