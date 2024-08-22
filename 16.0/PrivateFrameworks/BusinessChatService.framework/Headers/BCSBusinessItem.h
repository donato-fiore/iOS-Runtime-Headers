// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSBUSINESSITEM_H
#define BCSBUSINESSITEM_H

@class NSString, NSArray, NSDate, NSURL;
@protocol NSCopying, NSSecureCoding;


#import "BCSItem.h"
#import "BCSBusinessItemIdentifier.h"
#import "BCSOpenHours.h"

@interface BCSBusinessItem : BCSItem <NSCopying, NSSecureCoding>

 {
    BCSBusinessItemIdentifier *_itemIdentifier;
}


@property (readonly, nonatomic) NSUInteger backgroundColor; // ivar: _backgroundColor
@property (readonly, copy, nonatomic) NSString *bizID; // ivar: _bizID
@property (readonly, nonatomic, getter=_businessItemIdentifier) BCSBusinessItemIdentifier *businessItemIdentifier;
@property (readonly, nonatomic) NSString *callSubtitle;
@property (readonly, nonatomic) NSArray *callToActions; // ivar: _callToActions
@property (readonly, nonatomic) BCSOpenHours *callingOpenHours; // ivar: _callingOpenHours
@property (readonly, nonatomic) NSDate *dateWhenCallingAvailableNext;
@property (readonly, nonatomic) NSDate *dateWhenMessagingAvailableNext;
@property (readonly, nonatomic) NSString *groupID; // ivar: _groupID
@property (readonly, nonatomic) NSString *intentID; // ivar: _intentID
@property (readonly, nonatomic) BOOL isAvailableForCalling;
@property (readonly, nonatomic) BOOL isAvailableForMessaging;
@property (readonly, nonatomic) BOOL isVerified; // ivar: _isVerified
@property (readonly, nonatomic) NSString *messageSubtitle;
@property (readonly, nonatomic) NSString *messageTitle;
@property (readonly, nonatomic) NSURL *messagesOpenURL;
@property (readonly, nonatomic) BCSOpenHours *messagingOpenHours; // ivar: _messagingOpenHours
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSInteger phoneHash; // ivar: _phoneHash
@property (readonly, copy, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (readonly, copy, nonatomic) NSURL *squareLogoURL; // ivar: _squareLogoURL
@property (readonly, nonatomic) NSUInteger tintColor; // ivar: _tintColor
@property (readonly, nonatomic) NSArray *visibilityItems; // ivar: _visibilityItems
@property (readonly, copy, nonatomic) NSURL *wideLogoURL; // ivar: _wideLogoURL


+(BOOL)supportsSecureCoding;
+(id)businessItemsFromChatSuggestJSONObj:(id)arg0 ;
+(id)businessItemsFromChatSuggestMessageDictionary:(id)arg0 ;
+(id)businessItemsFromRecords:(id)arg0 ;
-(BOOL)_isChatSuggestVisibleForVisibilityItem:(id)arg0 messagesIdentifier:(id)arg1 bizID:(id)arg2 ;
-(BOOL)matchesItemIdentifying:(id)arg0 ;
-(NSInteger)truncatedHash;
-(NSInteger)type;
-(NSUInteger)_integerForHexString:(id)arg0 ;
-(id)_selectedVisibilityItemForLanguage:(id)arg0 country:(id)arg1 ;
-(id)callToAction;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithBizID:(id)arg0 phoneNumber:(id)arg1 name:(id)arg2 phoneHash:(NSInteger)arg3 squareLogoURL:(id)arg4 wideLogoURL:(id)arg5 tintColor:(NSUInteger)arg6 backgroundColor:(NSUInteger)arg7 callToActions:(id)arg8 messagingOpenHours:(id)arg9 callingOpenHours:(id)arg10 isVerified:(BOOL)arg11 intentID:(id)arg12 groupID:(id)arg13 visibilityItems:(id)arg14 ;
-(id)initWithChatSuggestMessage:(id)arg0 bucketID:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJSONObj:(id)arg0 ;
-(id)itemIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif