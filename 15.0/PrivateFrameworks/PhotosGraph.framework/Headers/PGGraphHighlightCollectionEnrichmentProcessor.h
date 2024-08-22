// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHHIGHLIGHTCOLLECTIONENRICHMENTPROCESSOR_H
#define PGGRAPHHIGHLIGHTCOLLECTIONENRICHMENTPROCESSOR_H

@class NSDictionary, NSString;
@protocol PGGraphDataModelEnrichmentProcessor;

#import <Foundation/Foundation.h>


@interface PGGraphHighlightCollectionEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor>

 {
    NSDictionary *_options;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsBackgroundJob;
+(CGFloat)backgroundJobTimeout;
+(id)backgroundJobName;
-(id)initWithOptions:(id)arg0 ;
-(void)_enrichYearHighlights:(id)arg0 monthsHighlights:(id)arg1 withManager:(id)arg2 curationContext:(id)arg3 enrichmentprogressBlock:(id)arg4 ;
-(void)enrichDataModelWithManager:(id)arg0 curationContext:(id)arg1 graphUpdateInventory:(id)arg2 progressBlock:(id)arg3 ;


@end


#endif