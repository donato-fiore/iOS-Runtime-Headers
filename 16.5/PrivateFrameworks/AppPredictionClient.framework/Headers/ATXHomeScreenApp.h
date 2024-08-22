// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXHOMESCREENAPP_H
#define ATXHOMESCREENAPP_H

@class NSString;
@protocol ATXHomeScreenLeafIconRepresentable;

#import <Foundation/Foundation.h>

#import "ATXHomeScreenPage.h"

@interface ATXHomeScreenApp : NSObject <ATXHomeScreenLeafIconRepresentable>



@property (readonly, copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger numAppLaunches; // ivar: _numAppLaunches
@property (readonly, nonatomic) NSUInteger numUniqueDays; // ivar: _numUniqueDays
@property (weak, nonatomic) ATXHomeScreenPage *page; // ivar: _page
@property (copy, nonatomic) NSString *predictionSource; // ivar: _predictionSource
@property (readonly, nonatomic) CGFloat score; // ivar: _score
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXHomeScreenApp:(id)arg0 ;
-(id)dictionaryRepresentationForIntrospection;
-(id)initWithBundleId:(id)arg0 ;
-(id)initWithBundleId:(id)arg0 predictionSource:(id)arg1 ;
-(id)initWithBundleId:(id)arg0 predictionSource:(id)arg1 score:(CGFloat)arg2 ;
-(id)initWithBundleId:(id)arg0 predictionSource:(id)arg1 score:(CGFloat)arg2 uniqueDaysLaunched:(NSUInteger)arg3 rawLaunchCount:(NSUInteger)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif