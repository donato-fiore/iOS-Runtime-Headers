// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APCONTENTDATA_H
#define APCONTENTDATA_H

@class NSString, NSUUID, NSURL, NSError, NSDate, NSDictionary, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "APInstallAttribution.h"

@interface APContentData : NSObject <NSSecureCoding>



@property (retain) NSString *brandName; // ivar: _brandName
@property (retain) NSString *campaignText; // ivar: _campaignText
@property (retain) NSUUID *contextIdentifier; // ivar: _contextIdentifier
@property (retain) NSString *disclosureRendererPayload; // ivar: _disclosureRendererPayload
@property (retain) NSURL *disclosureURL; // ivar: _disclosureURL
@property (retain) NSError *error; // ivar: _error
@property (retain) NSDate *expirationDate; // ivar: _expirationDate
@property (retain) NSString *humanReadableName; // ivar: _humanReadableName
@property (retain) NSString *identifier; // ivar: _identifier
@property CGFloat impressionThreshold; // ivar: _impressionThreshold
@property (retain) APInstallAttribution *installAttribution; // ivar: _installAttribution
@property (retain) NSString *journeyIdentifier; // ivar: _journeyIdentifier
@property (retain) NSDictionary *metadata; // ivar: _metadata
@property NSUInteger minimumTimeBetweenPresentation; // ivar: _minimumTimeBetweenPresentation
@property (retain) NSSet *representations; // ivar: _representations
@property (nonatomic) CGFloat serverResponseReceivedTimestamp; // ivar: _serverResponseReceivedTimestamp
@property NSInteger serverUnfilledReason; // ivar: _serverUnfilledReason
@property (retain) NSString *targetingExpressionId; // ivar: _targetingExpressionId
@property (retain) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
+(id)mockDataFromContext:(id)arg0 types:(id)arg1 ;
-(id)getRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)representationWithIdentifier:(id)arg0 ;
-(void)_correctNonNullableFields;
-(void)addRepresentation:(id)arg0 ;
-(void)addRepresentations:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeRepresentation:(id)arg0 ;


@end


#endif