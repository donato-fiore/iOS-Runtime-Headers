// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRISTORAGEMANAGEMENT_H
#define TRISTORAGEMANAGEMENT_H

@protocol TRIStorageManagementProtocol;

#import <Foundation/Foundation.h>


@interface TRIStorageManagement : NSObject <TRIStorageManagementProtocol>





-(BOOL)_clearContainerStorage;
-(BOOL)_clearStorage;
-(BOOL)_readDeviceIdWithSchemaVersion:(unsigned int)arg0 intoData:(*id)arg1 ;
-(BOOL)_readSchemaVersion:(*unsigned int)arg0 ;
-(BOOL)_runNamespaceDatabaseBlock:(id)arg0 ;
-(BOOL)_writeDeviceIdWithData:(id)arg0 schemaVersion:(unsigned int)arg1 ;
-(BOOL)_writeSchemaVersion:(unsigned int)arg0 ;
-(BOOL)prepareTrialStorage;
-(BOOL)requestTrialStorageResetOnNextLaunch;


@end


#endif