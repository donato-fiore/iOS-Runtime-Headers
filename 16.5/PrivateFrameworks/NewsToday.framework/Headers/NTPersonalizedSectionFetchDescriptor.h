// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPERSONALIZEDSECTIONFETCHDESCRIPTOR_H
#define NTPERSONALIZEDSECTIONFETCHDESCRIPTOR_H

@class NSString, NTPBPersonalizedTodaySectionSpecificConfig;
@protocol NTSectionFetchDescriptor;

#import <Foundation/Foundation.h>

#import "NTCatchUpOperationArticleIDsRequest.h"

@interface NTPersonalizedSectionFetchDescriptor : NSObject <NTSectionFetchDescriptor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NTCatchUpOperationArticleIDsRequest *mandatoryArticleIDsRequest; // ivar: _mandatoryArticleIDsRequest
@property (copy, nonatomic) NTCatchUpOperationArticleIDsRequest *personalizedArticleIDsRequest; // ivar: _personalizedArticleIDsRequest
@property (copy, nonatomic) NTPBPersonalizedTodaySectionSpecificConfig *personalizedConfiguration; // ivar: _personalizedConfiguration
@property (readonly) Class superclass;


-(id)assembleResultsWithCatchUpOperation:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg0 limit:(NSUInteger)arg1 priorFeedItems:(id)arg2 ;
-(id)incrementalSortTransformationWithFeedPersonalizer:(id)arg0 ;
-(id)init;
-(id)initWithPersonalizedConfiguration:(id)arg0 ;
-(void)configureCatchUpOperationWithFetchRequest:(id)arg0 ;


@end


#endif