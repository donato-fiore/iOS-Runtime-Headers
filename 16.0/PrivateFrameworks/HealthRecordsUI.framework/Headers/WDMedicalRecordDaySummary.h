// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDMEDICALRECORDDAYSUMMARY_H
#define WDMEDICALRECORDDAYSUMMARY_H

@class NSMutableDictionary, NSString, NSMutableSet;
@protocol WDMedicalRecordSummaryDelegate, WDMedicalRecordDaySummaryDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HRProfile.h"

@interface WDMedicalRecordDaySummary : NSObject <WDMedicalRecordSummaryDelegate>



@property (retain, nonatomic) NSMutableDictionary *categoriesBySourceAlphaOrdered; // ivar: _categoriesBySourceAlphaOrdered
@property (retain, nonatomic) NSMutableDictionary *categoriesBySourceByType; // ivar: _categoriesBySourceByType
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WDMedicalRecordDaySummaryDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableSet *inProgressCatogorySummaries; // ivar: _inProgressCatogorySummaries
@property (readonly, nonatomic) NSInteger numberOfDisplayItems;
@property (retain, nonatomic) HRProfile *profile; // ivar: _profile
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue; // ivar: _resourceQueue
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;


-(id)_alphaSortedCategories:(id)arg0 ;
-(id)_alphaSortedKeysForCategories:(id)arg0 ;
-(id)displayItemAtIndex:(NSInteger)arg0 ;
-(id)initWithProfile:(id)arg0 style:(NSInteger)arg1 delegate:(id)arg2 ;
-(void)addMedicalRecord:(id)arg0 ;
-(void)recomputeIfNeeded;
-(void)summaryDidFinishRecompute:(id)arg0 ;


@end


#endif