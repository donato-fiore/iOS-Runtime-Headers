// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMEDICATIONSDEMOSEARCHASSETINTERFACE_H
#define HKMEDICATIONSDEMOSEARCHASSETINTERFACE_H

@class NSString;
@protocol HKMedicationsAssetInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HKMedicationsDemoSearchAssetInterface : NSObject <HKMedicationsAssetInterface>

 {
    *sqlite3 _db;
    os_unfair_lock_s _interruptionLock;
}


@property (retain, nonatomic) NSString *assetPath; // ivar: _assetPath
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)expandedGenericMedicationSearchResult:(id)arg0 error:(*id)arg1 ;
-(id)genericMedicationsFromTokens:(id)arg0 error:(*id)arg1 ;
-(id)initWithAssetPath:(id)arg0 ;
-(id)medicationFromNDCCode:(id)arg0 error:(*id)arg1 ;
-(int)openAsset;
-(void)close;


@end


#endif