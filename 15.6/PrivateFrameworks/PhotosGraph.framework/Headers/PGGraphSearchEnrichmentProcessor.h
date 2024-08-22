// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHSEARCHENRICHMENTPROCESSOR_H
#define PGGRAPHSEARCHENRICHMENTPROCESSOR_H

@class NSString;
@protocol PGGraphDataModelEnrichmentProcessor;

#import <Foundation/Foundation.h>


@interface PGGraphSearchEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsBackgroundJob;
+(CGFloat)backgroundJobTimeout;
+(id)backgroundJobName;
-(BOOL)_shouldProcessGraphUpdate:(id)arg0 ;
// -(void)_processGraphUpdateInventory:(id)arg0 onGraph:(id)arg1 photoLibrary:(id)arg2 curationManager:(id)arg3 curationContext:(id)arg4 searchComputationCache:(id)arg5 progressBlock:(id)arg6 completionBlock:(unk)arg7  ;
-(void)enrichDataModelWithManager:(id)arg0 curationContext:(id)arg1 graphUpdateInventory:(id)arg2 progressBlock:(id)arg3 ;


@end


#endif