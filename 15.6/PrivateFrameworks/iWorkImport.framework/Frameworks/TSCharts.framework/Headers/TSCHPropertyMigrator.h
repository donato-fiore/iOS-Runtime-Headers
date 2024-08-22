// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHPROPERTYMIGRATOR_H
#define TSCHPROPERTYMIGRATOR_H

@class TSSPropertySet, TSUIntToIntDictionary, TSUIntegerKeyDictionary;

#import <Foundation/Foundation.h>


@interface TSCHPropertyMigrator : NSObject {
    TSSPropertySet *_propertiesToForce;
    TSUIntToIntDictionary *_shouldForceFlags;
    TSUIntegerKeyDictionary *_valuesToForce;
}




-(id)initWithProperties:(id)arg0 ;
-(void)migrateToSeries:(id)arg0 ;
-(void)visitExistingSeries:(id)arg0 ;


@end


#endif