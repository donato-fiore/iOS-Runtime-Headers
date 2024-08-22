// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ABDOWNTIMEWHITELISTMIGRATOR_H
#define ABDOWNTIMEWHITELISTMIGRATOR_H


#import <Foundation/Foundation.h>


@interface ABDowntimeWhitelistMigrator : NSObject



+(BOOL)moveDowntimeWhitelistFromUnknownProperties:(struct CPSqliteConnection *)arg0 ;
+(id)externalRepresentationFromUnknownProperties:(id)arg0 ;
+(id)unknownPropertiesFromExternalRepresentation:(id)arg0 ;


@end


#endif