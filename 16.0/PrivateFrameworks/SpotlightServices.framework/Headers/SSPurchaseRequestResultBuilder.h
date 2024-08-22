// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSPURCHASEREQUESTRESULTBUILDER_H
#define SSPURCHASEREQUESTRESULTBUILDER_H

@class NSString, NSArray, NSDate;


#import "SSResultBuilder.h"

@interface SSPurchaseRequestResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *ageRating; // ivar: _ageRating
@property (retain, nonatomic) NSString *appName; // ivar: _appName
@property (retain, nonatomic) NSString *appPrice; // ivar: _appPrice
@property (retain, nonatomic) NSString *appType; // ivar: _appType
@property (retain, nonatomic) NSArray *approvers; // ivar: _approvers
@property (retain, nonatomic) NSDate *requestDate; // ivar: _requestDate
@property (retain, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (nonatomic) int requestStatus; // ivar: _requestStatus
@property (retain, nonatomic) NSString *requestStatusString; // ivar: _requestStatusString
@property (retain, nonatomic) NSString *requesterContactIdentifier; // ivar: _requesterContactIdentifier
@property (retain, nonatomic) NSString *requesterName; // ivar: _requesterName
@property (retain, nonatomic) NSDate *respondDate; // ivar: _respondDate
@property (nonatomic) CGFloat starRating; // ivar: _starRating


+(id)bundleId;
-(BOOL)buildButtonItemsAreTrailing;
-(BOOL)buildSecondaryTitleIsDetached;
-(id)buildButtonItems;
-(id)buildCommand;
-(id)buildDescriptions;
-(id)buildFootnote;
-(id)buildInlineCardSection;
-(id)buildInlineCardSections;
-(id)buildSecondaryTitle;
-(id)buildThumbnail;
-(id)initWithResult:(id)arg0 ;
-(id)subclassBuildHorizontallyScrollingCardSection;


@end


#endif