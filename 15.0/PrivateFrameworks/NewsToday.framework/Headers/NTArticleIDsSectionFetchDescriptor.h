// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTARTICLEIDSSECTIONFETCHDESCRIPTOR_H
#define NTARTICLEIDSSECTIONFETCHDESCRIPTOR_H

@class NSString;
@protocol NTSectionFetchDescriptor;

#import <Foundation/Foundation.h>


@interface NTArticleIDsSectionFetchDescriptor : NSObject <NTSectionFetchDescriptor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSObject<NTSectionFetchDescriptor> *privateFetchDescriptor; // ivar: _privateFetchDescriptor
@property (readonly) Class superclass;


-(id)assembleResultsWithCatchUpOperation:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg0 limit:(NSUInteger)arg1 priorFeedItems:(id)arg2 ;
-(id)incrementalSortTransformationWithFeedPersonalizer:(id)arg0 ;
-(id)init;
-(id)initWithArticleIDsConfiguration:(id)arg0 ;
-(void)configureCatchUpOperationWithFetchRequest:(id)arg0 ;


@end


#endif