// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASPROXIMITYANISETTEREQUESTACTION_H
#define SASPROXIMITYANISETTEREQUESTACTION_H

@class AKAnisetteData, NSString, NSData;
@protocol AKAnisetteServiceProtocol;


#import "SASProximityAction.h"

@interface SASProximityAnisetteRequestAction : SASProximityAction <AKAnisetteServiceProtocol>



@property (retain) AKAnisetteData *anisetteData; // ivar: _anisetteData
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSString *dsid; // ivar: _dsid
@property (readonly) NSUInteger hash;
@property NSInteger request; // ivar: _request
@property BOOL shouldProvision; // ivar: _shouldProvision
@property (retain) NSData *sim; // ivar: _sim
@property BOOL success; // ivar: _success
@property (readonly) Class superclass;


+(NSUInteger)actionID;
+(id)actionFromDictionary:(id)arg0 ;
-(BOOL)hasResponse;
-(id)responsePayload;
-(void)eraseAnisetteWithCompletion:(id)arg0 ;
-(void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)legacyAnisetteDataForDSID:(id)arg0 withCompletion:(id)arg1 ;
-(void)provisionAnisetteWithCompletion:(id)arg0 ;
-(void)setResponseFromData:(id)arg0 ;
-(void)syncAnisetteWithSIMData:(id)arg0 completion:(id)arg1 ;


@end


#endif