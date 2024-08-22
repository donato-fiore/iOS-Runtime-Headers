// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGSQLENTITYSTORECNCONTACTMATCHERHELPER_H
#define SGSQLENTITYSTORECNCONTACTMATCHERHELPER_H

@class CNContact, NSSet, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface SGSqlEntityStoreCNContactMatcherHelper : NSObject {
    CNContact *_contact;
    NSSet *_nicks;
}


@property (readonly, nonatomic) NSArray *addressTags;
@property (readonly, nonatomic) NSArray *emailTags;
@property (readonly, nonatomic) NSString *interactionContactIdentifier;
@property (readonly, nonatomic) BOOL isMe;
@property (readonly, nonatomic) NSArray *phoneTags;
@property (readonly, nonatomic) NSString *prefilterNameMatchTerms;
@property (readonly, nonatomic) NSArray *socialProfileTags;
@property (readonly, nonatomic) NSArray *strongNamePatterns;
@property (readonly, nonatomic) NSArray *weakNamePatterns;


-(id)initWithCNContact:(id)arg0 ;


@end


#endif