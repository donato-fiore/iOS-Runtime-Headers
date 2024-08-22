// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTARTICLELISTSECTIONFETCHDESCRIPTOR_H
#define NTARTICLELISTSECTIONFETCHDESCRIPTOR_H

@class NTPBArticleListTodaySectionSpecificConfig, NSString;
@protocol NTSectionFetchDescriptor;

#import <Foundation/Foundation.h>


@interface NTArticleListSectionFetchDescriptor : NSObject <NTSectionFetchDescriptor>



@property (copy, nonatomic) NTPBArticleListTodaySectionSpecificConfig *articleListRequest; // ivar: _articleListRequest
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)assembleResultsWithCatchUpOperation:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg0 limit:(NSUInteger)arg1 priorFeedItems:(id)arg2 ;
-(id)incrementalSortTransformationWithFeedPersonalizer:(id)arg0 ;
-(id)init;
-(id)initWithArticleListConfiguration:(id)arg0 ;
-(void)configureCatchUpOperationWithFetchRequest:(id)arg0 ;


@end


#endif