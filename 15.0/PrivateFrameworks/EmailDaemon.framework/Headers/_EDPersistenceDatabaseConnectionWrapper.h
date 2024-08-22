// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EDPERSISTENCEDATABASECONNECTIONWRAPPER_H
#define _EDPERSISTENCEDATABASECONNECTIONWRAPPER_H

@class EFResource;

#import <Foundation/Foundation.h>

#import "EDPersistenceDatabaseConnection.h"

@interface _EDPersistenceDatabaseConnectionWrapper : NSObject

@property (readonly, nonatomic) EDPersistenceDatabaseConnection *connection; // ivar: _connection
@property (readonly, nonatomic) NSUInteger generation; // ivar: _generation
@property (retain, nonatomic) EFResource *resource; // ivar: _resource
@property (nonatomic) NSUInteger type; // ivar: _type


-(id)initWithConnection:(id)arg0 generation:(NSUInteger)arg1 ;


@end


#endif