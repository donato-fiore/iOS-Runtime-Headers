// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NDOSPECIFIERDATASOURCE_H
#define NDOSPECIFIERDATASOURCE_H

@class PSSpecifierDataSource, NSString, NDOManager, NSArray;
@protocol NDOAppleCareFlowDelegate, OS_dispatch_queue, OS_dispatch_group;


#import "NDOACController.h"

@interface NDOSpecifierDataSource : PSSpecifierDataSource <NDOAppleCareFlowDelegate>

 {
    NSObject<OS_dispatch_queue> *_policyLookupQueue;
    NSObject<OS_dispatch_group> *_group;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NDOACController *hostingController; // ivar: _hostingController
@property (retain, nonatomic) NDOManager *ndoManager; // ivar: _ndoManager
@property (retain, nonatomic) NSArray *ndoSpecifiers; // ivar: _ndoSpecifiers
@property (retain, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (readonly) Class superclass;


-(id)acController;
-(id)deviceDescriptionSpecifierWithDeviceInfo:(id)arg0 ;
-(id)init;
-(id)warrantyDetailText:(id)arg0 ;
-(id)warrantySpecifiersFromDeviceInfo:(id)arg0 ;
-(void)_updateSpecifiers:(id)arg0 specifierToInsertAfter:(id)arg1 withUpdates:(id)arg2 ;
-(void)loadSpecifiers;
-(void)ndoAppleCareCoveragePressed:(id)arg0 ;
-(void)outreachFinishedForDeviceWithSerialNumber:(id)arg0 withCompletion:(NSUInteger)arg1 ;
-(void)specifiersWithPolicy:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)updateNDOSpecifiersWithPolicy:(NSUInteger)arg0 completion:(id)arg1 ;


@end


#endif