// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKCOMMUNICATIONSAFETYEDUSCREENTWO_H
#define CKCOMMUNICATIONSAFETYEDUSCREENTWO_H

@class NSArray, NSIndexPath, NSSet;
@protocol CKCommunicationSafetyEDUScreenProtocol;


#import "CKCommunicationSafetyEDUScreen.h"
#import "CKComposition.h"

@interface CKCommunicationSafetyEDUScreenTwo : CKCommunicationSafetyEDUScreen

@property (readonly, nonatomic) CKComposition *composition; // ivar: _composition
@property (weak, nonatomic) NSObject<CKCommunicationSafetyEDUScreenProtocol> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSArray *identifiersOfShelvedImages; // ivar: _identifiersOfShelvedImages
@property (readonly, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath
@property (readonly, nonatomic) BOOL isSending; // ivar: _isSending
@property (readonly, nonatomic) BOOL isYoungAgeGroup; // ivar: _isYoungAgeGroup
@property (readonly, nonatomic) NSSet *sensitiveMediaObjects; // ivar: _sensitiveMediaObjects


-(id)initSecondReceivingEDUScreenWithItemIndexPath:(id)arg0 ;
-(id)initSecondSendingEDUScreenWithComposition:(id)arg0 withSensitiveMediaObjects:(id)arg1 withIdentifiersOfShelvedImages:(id)arg2 ;
-(void)_acceptButtonPressed;
-(void)_messageButtonPressed;
-(void)_notNowButtonPressed;
-(void)addButtonsToTray;
-(void)configureSecondReceiveScreen;
-(void)configureSecondSendScreen;


@end


#endif