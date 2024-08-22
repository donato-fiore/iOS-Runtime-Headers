// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKUCUMUNITDISPLAYCONVERTER_H
#define HKUCUMUNITDISPLAYCONVERTER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface HKUCUMUnitDisplayConverter : NSObject

@property (copy, nonatomic) NSDictionary *hkUnitNameLookupTable; // ivar: _hkUnitNameLookupTable
@property (copy, nonatomic) NSDictionary *synonymLookupTable; // ivar: _synonymLookupTable


+(id)sharedConverter;
-(id)hkUnitNameForUCUMUnitCode:(id)arg0 ;
-(id)init;
-(id)synonymForUCUMUnitString:(id)arg0 ;


@end


#endif