// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PMLTRAININGMOCK_H
#define PMLTRAININGMOCK_H

@class NSMutableArray, NSMutableDictionary, NSArray, NSString;
@protocol PMLTrainingProtocol;

#import <Foundation/Foundation.h>


@interface PMLTrainingMock : NSObject <PMLTrainingProtocol>

 {
    NSMutableArray *_internalCollectedSessions;
    NSMutableDictionary *_lastTrainingFeaturizations;
}


@property (readonly, nonatomic) NSArray *collectedSessions; // ivar: _collectedSessions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)lastTrainingFeaturizationForModelName:(id)arg0 andLocale:(id)arg1 ;
-(id)planReceivedWithPayload:(id)arg0 error:(*id)arg1 ;
-(id)planReceivedWithRecipe:(id)arg0 attachments:(id)arg1 error:(*id)arg2 ;
-(void)addSessionWithCovariates:(id)arg0 label:(NSInteger)arg1 sessionDescriptor:(id)arg2 spotlightReference:(id)arg3 isInternal:(BOOL)arg4 ;
-(void)clearCollectedSessions;
-(void)deleteSessionsWithBundleID:(id)arg0 ;
-(void)deleteSessionsWithDomainIdentifiers:(id)arg0 bundleID:(id)arg1 ;
-(void)deleteSessionsWithIdentifiers:(id)arg0 bundleID:(id)arg1 ;
-(void)trimDbWithDeferralBlock:(id)arg0 ;
-(void)updateLastTrainingFeaturizationForModel:(id)arg0 andData:(id)arg1 ;
-(void)updateSessionsAndLabelForModel:(id)arg0 block:(id)arg1 ;


@end


#endif