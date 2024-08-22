// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3DATABASEVALIDATIONCLIENT_H
#define ML3DATABASEVALIDATIONCLIENT_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ML3DatabaseValidationClient : NSObject {
    NSMutableDictionary *_validatableDatabases;
    NSObject<OS_dispatch_queue> *_serialQueue;
}




+(id)sharedClient;
-(BOOL)_validateDatabaseForPath:(id)arg0 usingLibrary:(id)arg1 ;
-(BOOL)isValidatingDatabaseForPath:(id)arg0 ;
-(BOOL)validateDatabaseAtPath:(id)arg0 ;
-(BOOL)validateDatabaseForConnection:(id)arg0 ;
-(BOOL)validateDatabaseForLibrary:(id)arg0 ;
-(id)_validatableDatabaseForPath:(id)arg0 ;
-(id)init;


@end


#endif