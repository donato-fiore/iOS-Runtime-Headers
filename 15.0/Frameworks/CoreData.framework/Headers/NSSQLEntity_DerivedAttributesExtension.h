// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSQLENTITY_DERIVEDATTRIBUTESEXTENSION_H
#define NSSQLENTITY_DERIVEDATTRIBUTESEXTENSION_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "NSSQLEntity.h"

@interface NSSQLEntity_DerivedAttributesExtension : NSObject {
    NSSQLEntity *_entity;
    *__CFDictionary _derivedAttributes;
    NSMutableArray *_triggerSQL;
    NSMutableDictionary *_migrationSQL;
}




-(id)entity;
-(id)initWithEntity:(id)arg0 ;
-(void)dealloc;


@end


#endif