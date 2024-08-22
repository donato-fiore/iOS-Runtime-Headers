// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNMEDICALIDACTION_H
#define CNMEDICALIDACTION_H

@class CNContact, NSString;
@protocol HKMedicalIDViewControllerDelegate;


#import "CNPropertyAction.h"
#import "CNHealthStoreManager.h"

@interface CNMedicalIDAction : CNPropertyAction <HKMedicalIDViewControllerDelegate>



@property (retain, nonatomic) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNHealthStoreManager *healthStoreManager; // ivar: _healthStoreManager
@property (nonatomic) NSInteger medicalIDActionType; // ivar: _medicalIDActionType
@property (readonly) Class superclass;


-(void)medicalIDViewControllerDidCancel:(id)arg0 ;
-(void)medicalIDViewControllerDidDelete:(id)arg0 ;
-(void)medicalIDViewControllerDidFinish:(id)arg0 ;
-(void)medicalIDViewControllerDidSave:(id)arg0 ;
-(void)performActionWithSender:(id)arg0 ;


@end


#endif