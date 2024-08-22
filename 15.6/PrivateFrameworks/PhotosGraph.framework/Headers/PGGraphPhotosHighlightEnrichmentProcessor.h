// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHPHOTOSHIGHLIGHTENRICHMENTPROCESSOR_H
#define PGGRAPHPHOTOSHIGHLIGHTENRICHMENTPROCESSOR_H

@class NSString;
@protocol PGGraphDataModelEnrichmentProcessor;

#import <Foundation/Foundation.h>


@interface PGGraphPhotosHighlightEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger highlightTailorOptions; // ivar: _highlightTailorOptions
@property (readonly) Class superclass;


+(BOOL)supportsBackgroundJob;
+(CGFloat)backgroundJobTimeout;
+(id)backgroundJobName;
-(id)init;
-(id)initWithHighlightTailorOptions:(NSUInteger)arg0 ;
-(void)_logFirstTimeExperienceMetricsIfNeededWithManager:(id)arg0 ;
-(void)enrichDataModelWithManager:(id)arg0 curationContext:(id)arg1 graphUpdateInventory:(id)arg2 progressBlock:(id)arg3 ;


@end


#endif