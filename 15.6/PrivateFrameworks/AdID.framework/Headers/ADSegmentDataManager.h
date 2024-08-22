// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADSEGMENTDATAMANAGER_H
#define ADSEGMENTDATAMANAGER_H

@class ADSingleton, NSNumber;



@interface ADSegmentDataManager : ADSingleton

@property (copy, nonatomic) NSNumber *pendingJingleRequestToken; // ivar: _pendingJingleRequestToken
@property (readonly, nonatomic) BOOL segmentRetrievalInProgress;
@property (nonatomic) BOOL segmentUpdateInProgress; // ivar: _segmentUpdateInProgress


+(id)sharedInstance;
-(BOOL)shouldSendSegmentDataToAdPlatforms:(id)arg0 ;
-(BOOL)shouldSendSegmentRequest:(id)arg0 ignoreTimestamps:(BOOL)arg1 ;
-(BOOL)verifyGenderInSegmentData:(id)arg0 ;
-(id)checkTokenAndDSID:(id)arg0 ;
-(void)handleJingleSegmentResponse:(id)arg0 activeRecord:(id)arg1 completionHandler:(id)arg2 ;
-(void)handleSegmentUpdateResponse:(id)arg0 error:(id)arg1 completionHandler:(id)arg2 ;
-(void)handleSuccessfulJingleSegmentResponse:(id)arg0 dsidRecord:(id)arg1 completionHandler:(id)arg2 ;
-(void)populateAccountTypeFields:(id)arg0 ;
-(void)retrieveSegmentData:(id)arg0 forceSegments:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)retrieveSegmentData:(id)arg0 forceSegments:(BOOL)arg1 ignoreTimestamps:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)retrieveSegmentDataIgnoringTimestamps:(id)arg0 forceSegments:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)sendSegmentDataToAdPlatforms:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif