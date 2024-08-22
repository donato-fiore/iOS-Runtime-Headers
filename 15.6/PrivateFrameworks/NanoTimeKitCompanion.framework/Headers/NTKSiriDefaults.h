// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKSIRIDEFAULTS_H
#define NTKSIRIDEFAULTS_H

@class NSString, NSSet;
@protocol NTKFaceCollectionObserver;

#import <Foundation/Foundation.h>

#import "NTKFaceCollection.h"

@interface NTKSiriDefaults : NSObject <NTKFaceCollectionObserver>

 {
    NTKFaceCollection *_faceCollection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSSet *disabledDataSources;
@property (readonly, nonatomic) BOOL hasMigratedDisabledDataSources; // ivar: _hasMigratedDisabledDataSources
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isUpNextFaceCurrentlyActive;
@property (retain, nonatomic) NSSet *phoneThirdPartyDataSources;
@property (readonly) Class superclass;
@property (nonatomic) BOOL watchHasMigratedAvailableDataSources;
@property (retain, nonatomic) NSSet *watchThirdPartyDataSources;


+(id)sharedInstance;
-(BOOL)hasMigratedDataSources;
-(id)_domainAccesor;
-(id)init;
-(void)_activeDeviceDidChange:(id)arg0 ;
-(void)_fetchNewFaceCollection;
-(void)_synchronizeDefaultsForKeys:(id)arg0 ;
-(void)_thirdPartyDataSourcesDidChange;
-(void)faceCollectionDidLoad:(id)arg0 ;
-(void)migrateIfNecessary;


@end


#endif