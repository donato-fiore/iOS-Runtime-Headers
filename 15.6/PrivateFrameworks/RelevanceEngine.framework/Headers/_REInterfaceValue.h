// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _REINTERFACEVALUE_H
#define _REINTERFACEVALUE_H

@class NSArray, NSHashTable, NSMapTable;

#import <Foundation/Foundation.h>

#import "_REInterfaceKey.h"

@interface _REInterfaceValue : NSObject

@property (retain, nonatomic) NSArray *conformedInterfaces; // ivar: _conformedInterfaces
@property (retain, nonatomic) NSHashTable *conformedProtocols; // ivar: _conformedProtocols
@property (retain, nonatomic) NSMapTable *methods; // ivar: _methods
@property (retain, nonatomic) NSMapTable *properties; // ivar: _properties
@property (retain, nonatomic) _REInterfaceKey *type; // ivar: _type




@end


#endif