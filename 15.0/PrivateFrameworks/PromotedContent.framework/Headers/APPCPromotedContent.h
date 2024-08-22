// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APPCPROMOTEDCONTENT_H
#define APPCPROMOTEDCONTENT_H

@class NSString, NSUUID, NSURL, NSError, NSDate, APInstallAttribution, NSDictionary, NSArray;
@protocol APPCPromotableContent, APPCPromotableContentRepresentation, APPCPromotableContext, APPCDiagnosticMetricsHelping, APPCMediaMetricsHelping, APPCCarouselMetricsHelping><APPCJourneyMetricsHelping;

#import <Foundation/Foundation.h>


@interface APPCPromotedContent : NSObject <APPCPromotableContent>

 {
    ? identifier;
    ? journeyIdentifier;
    ? metaData;
    ? disclosureURL;
    ? disclosureRendererPayload;
    ? brandName;
    ? campaignText;
    ? representations;
    ? expirationDate;
    ? unfilledReasonDelegate;
    ? overriddenAdType;
    ? discardReason;
    ? primitiveCreator;
    ? placement;
}


@property (nonatomic, readonly) NSInteger adType;
@property (nonatomic) BOOL attachedToView; // ivar: attachedToView
@property (nonatomic, readonly) BOOL available;
@property (nonatomic, retain) NSObject<APPCPromotableContentRepresentation> *bestRepresentation; // ivar: bestRepresentation
@property (nonatomic, copy) NSString *brandName;
@property (nonatomic, copy) NSString *campaignText;
@property (nonatomic) BOOL consumed; // ivar: consumed
@property (nonatomic, weak) NSObject<APPCPromotableContext> *context; // ivar: context
@property (nonatomic, readonly) NSUUID *contextIdentifier;
@property (nonatomic, readonly) NSObject<APPCDiagnosticMetricsHelping> *diagnosticMetricHelper; // ivar: diagnosticMetricHelper
@property (nonatomic) BOOL discarded; // ivar: discarded
@property (nonatomic, copy) NSString *disclosureRendererPayload;
@property (nonatomic, copy) NSURL *disclosureURL;
@property (nonatomic, retain) NSError *error; // ivar: error
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) APInstallAttribution *installAttribution; // ivar: installAttribution
@property (nonatomic, readonly) BOOL isMRAID;
@property (nonatomic, readonly) BOOL isOutstreamVideoAd;
@property (nonatomic, copy) NSString *journeyIdentifier;
@property (nonatomic, retain) NSObject<APPCMediaMetricsHelping> *mediaMetricHelper; // ivar: mediaMetricHelper
@property (nonatomic, copy) NSDictionary *metaData;
@property (nonatomic, retain) NSObject<APPCCarouselMetricsHelping><APPCJourneyMetricsHelping> *metricsHelper; // ivar: metricsHelper
@property (nonatomic) NSUInteger minimumTimeBetweenPresentation; // ivar: minimumTimeBetweenPresentation
@property (nonatomic, readonly) BOOL placeholder; // ivar: placeholder
@property (nonatomic, copy) NSArray *representations;
@property (nonatomic) NSInteger serverUnfilledReason; // ivar: serverUnfilledReason
@property (nonatomic, readonly) NSDictionary *transparencyDetailsDictionary;
@property (nonatomic) BOOL vended; // ivar: vended


-(id)init;
-(void)replaceMetricsHelperWithNewMetricsHelper:(id)arg0 ;


@end


#endif