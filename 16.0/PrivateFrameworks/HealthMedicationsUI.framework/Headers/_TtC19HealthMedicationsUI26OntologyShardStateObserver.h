// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19HEALTHMEDICATIONSUI26ONTOLOGYSHARDSTATEOBSERVER_H
#define _TTC19HEALTHMEDICATIONSUI26ONTOLOGYSHARDSTATEOBSERVER_H

@class SwiftObject;
@protocol HKOntologyStoreObserver;



@interface _TtC19HealthMedicationsUI26OntologyShardStateObserver : SwiftObject <HKOntologyStoreObserver>

 {
    ? _shardState;
    ? _isImported;
    ? identifier;
    ? ontologyStore;
    ? settingsManager;
}




-(void)ontologyStore:(id)arg0 didImportEntry:(id)arg1 ;
-(void)ontologyStore:(id)arg0 didStageEntry:(id)arg1 ;
-(void)ontologyStoreDidReconnect:(id)arg0 ;


@end


#endif