// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDATABASECHANGESQUERYSERVER_H
#define HDDATABASECHANGESQUERYSERVER_H

@class NSMutableDictionary, HKQueryAnchor, NSString;


#import "HDQueryServer.h"

@interface HDDatabaseChangesQueryServer : HDQueryServer {
    NSMutableDictionary *_pendingSampleTypeChanges;
    HKQueryAnchor *_anchor;
    BOOL _hasDeliveredInitialResults;
    NSString *_detailsQueryDateIndexSQL;
    NSString *_detailsQueryAnchorIndexSQL;
}




+(Class)queryClass;
-(BOOL)_shouldListenForUpdates;
-(BOOL)validateConfiguration:(*id)arg0 ;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)objectTypes;
-(void)_queue_start;
-(void)didAddSamplesOfTypes:(id)arg0 anchor:(id)arg1 ;
-(void)samplesAdded:(id)arg0 anchor:(id)arg1 ;
-(void)samplesOfTypesWereRemoved:(id)arg0 anchor:(id)arg1 ;


@end


#endif