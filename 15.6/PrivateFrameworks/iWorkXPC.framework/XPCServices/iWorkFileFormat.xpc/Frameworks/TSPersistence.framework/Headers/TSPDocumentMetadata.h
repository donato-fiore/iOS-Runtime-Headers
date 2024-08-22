// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPDOCUMENTMETADATA_H
#define TSPDOCUMENTMETADATA_H

@protocol OS_dispatch_queue;


#import "TSPObject.h"

@interface TSPDocumentMetadata : TSPObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    DigestMap<TSP::DataProperties> _dataPropertiesMap;
    BOOL _isInCollaborationModeForArchiving;
    DigestMap<TSP::DataProperties> _dataPropertiesMapForArchiving;
}




-(NSInteger)tsp_identifier;
-(id)packageLocator;
-(struct DataProperties )propertiesForData:(id)arg0 ;
-(unsigned char)componentRequiredPackageIdentifier;
-(void)commonInit;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)propertiesForData:(id)arg0 usingBlock:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setPropertiesForData:(id)arg0 usingBlock:(id)arg1 ;
-(void)takeSnapshotWithCollaborationMode:(BOOL)arg0 ;
-(void)updateForSuccessfulSave;


@end


#endif