// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCKPRIVATEDATABASESCHEMA_H
#define FCCKPRIVATEDATABASESCHEMA_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface FCCKPrivateDatabaseSchema : NSObject {
    NSDictionary *_zoneSchemasByClientName;
    NSDictionary *_zoneSchemasByServerName;
    NSArray *_defaultZoneSchemas;
}




-(id)init;


@end


#endif