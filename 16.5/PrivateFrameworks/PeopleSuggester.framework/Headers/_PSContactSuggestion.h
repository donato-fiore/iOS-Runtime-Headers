// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSCONTACTSUGGESTION_H
#define _PSCONTACTSUGGESTION_H

@class CNContact, NSString, NSSet, NSArray, NSDictionary, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _PSContactSuggestion : NSObject <NSSecureCoding>



@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (copy, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (copy, nonatomic) NSSet *daysInteracted; // ivar: _daysInteracted
@property (copy, nonatomic) NSString *familyName; // ivar: _familyName
@property (copy, nonatomic) NSString *givenName; // ivar: _givenName
@property (copy, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (copy, nonatomic) NSString *groupName; // ivar: _groupName
@property (copy, nonatomic) NSArray *groupRecipients; // ivar: _groupRecipients
@property (copy, nonatomic) NSDictionary *handleAndAppFrequencies; // ivar: _handleAndAppFrequencies
@property (copy, nonatomic) NSDictionary *handleAndAppRegularityScores; // ivar: _handleAndAppRegularityScores
@property (copy, nonatomic) NSURL *imageURL; // ivar: _imageURL
@property (copy, nonatomic) NSString *messagesGroupIdentifier; // ivar: _messagesGroupIdentifier
@property (nonatomic) CGFloat peopleWidgetScore; // ivar: _peopleWidgetScore
@property (nonatomic) CGFloat regularityScore; // ivar: _regularityScore
@property (copy, nonatomic) NSString *suggestedHandle; // ivar: _suggestedHandle
@property (nonatomic) NSUInteger totalFrequency; // ivar: _totalFrequency


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContact:(id)arg0 andScore:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif