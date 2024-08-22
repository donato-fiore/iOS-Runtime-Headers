// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMREGISTRAR_H
#define BMREGISTRAR_H

@class NSDictionary;


#import "BMSQLStore.h"

@interface BMRegistrar : BMSQLStore

@property (readonly, nonatomic) NSDictionary *registeredClientsByStream;
@property (readonly, nonatomic) NSDictionary *streamRegistrationCounts;


+(id)centralRegistrar;
+(id)migrations;
-(BOOL)propagateDeletionOfEvents:(id)arg0 ;
-(BOOL)propagateDeletionOfEventsInStream:(id)arg0 withIdentifiers:(id)arg1 ;
-(BOOL)registerClientWithBundleID:(id)arg0 databaseURL:(id)arg1 source:(id)arg2 ;
-(id)init;
-(id)registrationsForStream:(id)arg0 ;


@end


#endif