// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTITEMSSECTIONFETCHDESCRIPTOR_H
#define NTITEMSSECTIONFETCHDESCRIPTOR_H

@class NSString, NTPBItemsTodaySectionSpecificConfig;
@protocol NTSectionFetchDescriptor;

#import <Foundation/Foundation.h>

#import "NTCatchUpOperationArticleIDsRequest.h"

@interface NTItemsSectionFetchDescriptor : NSObject <NTSectionFetchDescriptor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NTCatchUpOperationArticleIDsRequest *itemsArticlesRequest; // ivar: _itemsArticlesRequest
@property (copy, nonatomic) NTPBItemsTodaySectionSpecificConfig *itemsConfiguration; // ivar: _itemsConfiguration
@property (readonly) Class superclass;


-(id)assembleResultsWithCatchUpOperation:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg0 limit:(NSUInteger)arg1 priorFeedItems:(id)arg2 ;
-(id)incrementalSortTransformationWithFeedPersonalizer:(id)arg0 ;
-(id)init;
-(id)initWithItemsConfiguration:(id)arg0 ;
-(void)configureCatchUpOperationWithFetchRequest:(id)arg0 ;


@end


#endif