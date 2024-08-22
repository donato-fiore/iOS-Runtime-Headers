// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTTAGSECTIONFETCHDESCRIPTOR_H
#define NTTAGSECTIONFETCHDESCRIPTOR_H

@class NSString;
@protocol NTSectionFetchDescriptor;

#import <Foundation/Foundation.h>

#import "NTCatchUpOperationForYouRequest.h"
#import "NTCatchUpOperationTagRequest.h"

@interface NTTagSectionFetchDescriptor : NSObject <NTSectionFetchDescriptor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NTCatchUpOperationForYouRequest *forYouRequest; // ivar: _forYouRequest
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NTCatchUpOperationTagRequest *tagRequest; // ivar: _tagRequest


-(id)assembleResultsWithCatchUpOperation:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg0 limit:(NSUInteger)arg1 priorFeedItems:(id)arg2 ;
-(id)incrementalSortTransformationWithFeedPersonalizer:(id)arg0 ;
-(id)init;
-(id)initWithTagConfiguration:(id)arg0 appConfiguration:(id)arg1 purchasedTagIDs:(id)arg2 bundleSubscriptionProvider:(id)arg3 ;
-(void)configureCatchUpOperationWithFetchRequest:(id)arg0 ;


@end


#endif