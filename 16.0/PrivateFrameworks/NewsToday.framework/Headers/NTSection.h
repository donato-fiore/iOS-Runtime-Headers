// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTSECTION_H
#define NTSECTION_H

@class NSString, NSURL, NTPBSectionDisplayDescriptor, NSOrderedSet, SFRankingFeedback;
@protocol NTSectionDisplayDescriptor, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NTSection : NSObject <NTSectionDisplayDescriptor, NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *actionTitle; // ivar: _actionTitle
@property (copy, nonatomic) NSURL *actionURL; // ivar: _actionURL
@property (readonly, copy, nonatomic) NSString *backgroundColorDark;
@property (readonly, copy, nonatomic) NSString *backgroundColorLight;
@property (copy, nonatomic) NSString *backingTagID; // ivar: _backingTagID
@property (copy, nonatomic) NTPBSectionDisplayDescriptor *displayDescriptor; // ivar: _displayDescriptor
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSOrderedSet *items; // ivar: _items
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSURL *nameActionURL;
@property (readonly, copy, nonatomic) NSString *nameColorDark;
@property (readonly, copy, nonatomic) NSString *nameColorLight;
@property (readonly, copy, nonatomic) NSString *personalizationFeatureID; // ivar: _personalizationFeatureID
@property (copy, nonatomic) SFRankingFeedback *rankingFeedback; // ivar: _rankingFeedback
@property (copy, nonatomic) NSString *referralBarName; // ivar: _referralBarName
@property (copy, nonatomic) NSString *subidentifier; // ivar: _subidentifier


+(BOOL)supportsSecureCoding;
+(id)_itemClassesByType;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 subidentifier:(id)arg1 actionTitle:(id)arg2 actionURL:(id)arg3 personalizationFeatureID:(id)arg4 items:(id)arg5 rankingFeedback:(id)arg6 displayDescriptor:(id)arg7 referralBarName:(id)arg8 backingTagID:(id)arg9 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif