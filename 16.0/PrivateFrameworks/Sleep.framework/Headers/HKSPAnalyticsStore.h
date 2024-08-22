// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSPANALYTICSSTORE_H
#define HKSPANALYTICSSTORE_H

@protocol HKSPUserDefaults;

#import <Foundation/Foundation.h>


@interface HKSPAnalyticsStore : NSObject

@property (copy, nonatomic) id *diagnosticsOptInStatusProvider; // ivar: _diagnosticsOptInStatusProvider
@property (readonly, nonatomic) NSObject<HKSPUserDefaults> *userDefaults; // ivar: _userDefaults


-(id)initWithUserDefaults:(id)arg0 ;
-(id)initWithUserDefaults:(id)arg0 diagnosticsOptInStatusProvider:(id)arg1 ;
-(id)readAllWindDownActions;
-(id)uncollectedWindDownActions;
-(id)windDownActionsAfterMorningIndex:(NSInteger)arg0 ;
-(id)windDownActionsForMorningIndex:(NSInteger)arg0 ;
-(void)_setWindDownActions:(id)arg0 forMorningIndex:(NSInteger)arg1 overwriteExisting:(BOOL)arg2 ;
-(void)markAllActionsAsCollected;
-(void)removeAllWindDownActionsBeforeMorningIndex:(NSInteger)arg0 ;
-(void)setBaselineForWindDownActions:(id)arg0 onMorningIndex:(NSInteger)arg1 ;
-(void)updateWindDownActions:(id)arg0 onMorningIndex:(NSInteger)arg1 ;
-(void)writeWindDownActions:(id)arg0 ;


@end


#endif