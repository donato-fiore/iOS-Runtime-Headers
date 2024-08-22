// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDDATAPROVENANCEMANAGER_H
#define HDDATAPROVENANCEMANAGER_H

@class NSString, NSLock, NSNumber;
@protocol HDDiagnosticObject;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDContributorReference.h"
#import "HDDatabaseValueCache.h"

@interface HDDataProvenanceManager : NSObject <HDDiagnosticObject>

 {
    HDProfile *_profile;
    NSString *_localSourceVersion;
    NSLock *_propertyLock;
    NSNumber *_propertyLock_localSourceID;
    NSNumber *_propertyLock_localDeviceID;
    NSNumber *_propertyLock_deviceNoneID;
    HDContributorReference *_propertyLock_noneContributorReference;
    HDContributorReference *_propertyLock_primaryUserContributorReference;
    uint8_t _defaultsLoaded;
    HDDatabaseValueCache *_persistentIDsByProvenanceKey;
    HDDatabaseValueCache *_originProvenanceByPersistentID;
    NSString *_localSystemBuild;
    NSString *_localProductType;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)defaultLocalDataProvenance;
-(id)defaultLocalDataProvenanceWithDeviceEntity:(id)arg0 ;
-(id)diagnosticDescription;
-(id)initWithProfile:(id)arg0 ;
-(id)localDataProvenanceForSourceEntity:(id)arg0 version:(id)arg1 deviceEntity:(id)arg2 ;
-(id)originProvenanceForPersistentID:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)provenanceEntityForProvenance:(id)arg0 error:(*id)arg1 ;
-(id)provenanceEntityForProvenance:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;


@end


#endif