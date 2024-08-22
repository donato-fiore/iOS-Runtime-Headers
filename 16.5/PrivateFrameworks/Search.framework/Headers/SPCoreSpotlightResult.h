// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPCORESPOTLIGHTRESULT_H
#define SPCORESPOTLIGHTRESULT_H

@class Compatibility, NSString, NSArray, NSDate;
@protocol NSCopying;



@interface SPCoreSpotlightResult : Compatibility <NSCopying>



@property (retain) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (nonatomic) BOOL bestInContainer; // ivar: _bestInContainer
@property unk buddyScore; // ivar: _buddyScore
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain) NSArray *compatibilityDescriptions;
@property BOOL completed; // ivar: _completed
@property (retain) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (retain, nonatomic) NSDate *contentCreationDate; // ivar: _contentCreationDate
@property (retain) NSString *domainIdentifier; // ivar: _domainIdentifier
@property (nonatomic) BOOL hasAssociatedUserActivity; // ivar: _hasAssociatedUserActivity
@property *NSInteger incomingCount; // ivar: _incomingCount
@property (retain) NSDate *interestingDate; // ivar: _interestingDate
@property (retain) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (retain, nonatomic) NSArray *launchDates; // ivar: _launchDates
@property (retain) NSString *mailConversationIdentifier; // ivar: _mailConversationIdentifier
@property *NSInteger outgoingCount; // ivar: _outgoingCount
@property (retain) NSString *relatedBundleID; // ivar: _relatedBundleID
@property (retain) NSString *relatedUniqueIdentifier; // ivar: _relatedUniqueIdentifier
@property (retain) NSString *stringForDedupe; // ivar: _stringForDedupe
@property int title_maxlines;


-(BOOL)hasDetail;
-(Class)classForCoder;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)init;


@end


#endif