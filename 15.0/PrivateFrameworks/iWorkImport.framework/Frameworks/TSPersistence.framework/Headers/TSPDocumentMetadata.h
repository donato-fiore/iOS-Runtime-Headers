// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPDOCUMENTMETADATA_H
#define TSPDOCUMENTMETADATA_H

@class NSSet;
@protocol OS_dispatch_queue;


#import "TSPObject.h"

@interface TSPDocumentMetadata : TSPObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    DigestMap<TSP::DataProperties> _dataPropertiesMap;
    os_unfair_lock_s _archivingLock;
    BOOL _isInCollaborationModeForArchiving;
    DigestMap<TSP::DataProperties> _dataPropertiesMapForArchiving;
    NSSet *_knownDataDigests;
}




-(NSInteger)tsp_identifier;
-(id)packageLocator;
-(struct DataProperties )propertiesForData:(id)arg0 ;
-(unsigned char)componentRequiredPackageIdentifier;
-(void)commonInit;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)propertiesForData:(id)arg0 usingBlock:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setKnownDataDigestsForAutosave:(id)arg0 ;
-(void)setPropertiesForData:(id)arg0 usingBlock:(id)arg1 ;
-(void)takeSnapshotWithCollaborationMode:(BOOL)arg0 ;
-(void)updateForSuccessfulSave;


@end


#endif