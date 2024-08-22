// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSSCREENTIMEREQUESTRESULTBUILDER_H
#define SSSCREENTIMEREQUESTRESULTBUILDER_H

@class NSArray, NSDate, NSNumber, NSString;


#import "SSResultBuilder.h"

@interface SSScreenTimeRequestResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSArray *approvers; // ivar: _approvers
@property (retain, nonatomic) NSDate *expireDate; // ivar: _expireDate
@property (retain, nonatomic) NSNumber *requestAmountDuration; // ivar: _requestAmountDuration
@property (retain, nonatomic) NSDate *requestDate; // ivar: _requestDate
@property (retain, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (nonatomic) int requestStatus; // ivar: _requestStatus
@property (retain, nonatomic) NSString *requestStatusString; // ivar: _requestStatusString
@property (retain, nonatomic) NSString *requestedItemDescription; // ivar: _requestedItemDescription
@property (retain, nonatomic) NSString *requestedItemName; // ivar: _requestedItemName
@property (retain, nonatomic) NSString *requesterContactIdentifier; // ivar: _requesterContactIdentifier
@property (retain, nonatomic) NSNumber *requesterDSID; // ivar: _requesterDSID
@property (retain, nonatomic) NSDate *respondDate; // ivar: _respondDate


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