// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTSECTIONFEEDFILTERTRANSFORMATION_H
#define NTSECTIONFEEDFILTERTRANSFORMATION_H

@class NSString;
@protocol NTFeedTransforming;

#import <Foundation/Foundation.h>


@interface NTSectionFeedFilterTransformation : NSObject <NTFeedTransforming>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger embedsLimit; // ivar: _embedsLimit
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<NTFeedTransforming> *underlyingTransformation; // ivar: _underlyingTransformation


-(id)init;
-(id)initWithTodayData:(id)arg0 configurationManager:(id)arg1 readArticlesFilterMethod:(int)arg2 seenArticlesFilterMethod:(int)arg3 minimumTimeSinceFirstSeenToFilter:(CGFloat)arg4 supplementalFeedFilterOptions:(NSInteger)arg5 embedsLimit:(NSUInteger)arg6 otherArticleIDs:(id)arg7 otherClusterIDs:(id)arg8 filterDate:(id)arg9 ;
-(id)transformFeedItems:(id)arg0 ;


@end


#endif