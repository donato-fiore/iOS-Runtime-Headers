// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACHQUERY_H
#define ACHQUERY_H

@class HKQuery, NSString;
@protocol ACHQueryClientInterface;



@interface ACHQuery : HKQuery <ACHQueryClientInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *initialAchievementsHandler; // ivar: _initialAchievementsHandler
@property (copy, nonatomic) id *newAchievementsHandler; // ivar: _newAchievementsHandler
@property (copy, nonatomic) id *removedAchievementsHandler; // ivar: _removedAchievementsHandler
@property (readonly) Class superclass;
@property (copy, nonatomic) id *updatedAchievementsHandler; // ivar: _updatedAchievementsHandler


+(BOOL)supportsTaskServers;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg0 ;
// -(id)initWithInitialAchievementsHandler:(id)arg0 newAchievementsHandler:(unk)arg1 updatedAchievementsHandler:(id)arg2 removedAchievementsHandler:(unk)arg3  ;
-(void)client_achievementsDidFinishInitialFetch:(id)arg0 ;
-(void)client_deliverNewAchievements:(id)arg0 ;
-(void)client_deliverRemovedAchievements:(id)arg0 ;
-(void)client_deliverUpdatedAchievements:(id)arg0 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;


@end


#endif