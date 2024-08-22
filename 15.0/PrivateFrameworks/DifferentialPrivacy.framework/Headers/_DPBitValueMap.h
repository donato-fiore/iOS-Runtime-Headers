// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DPBITVALUEMAP_H
#define _DPBITVALUEMAP_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface _DPBitValueMap : NSObject

@property (readonly, copy, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) NSDictionary *map; // ivar: _map


+(id)bitValueMapForKey:(id)arg0 ;
+(id)bitValueMapForKey:(id)arg0 bitValueMapsDirectory:(id)arg1 ;
+(id)bitValueMapForKey:(id)arg0 fromConfigurationsFile:(id)arg1 ;
+(void)initialize;
+(void)removeBitValueMapForKey:(id)arg0 ;
-(id)bitValueForString:(id)arg0 ;
-(id)init;
-(id)initWithKey:(id)arg0 bitValueMapsDirectory:(id)arg1 ;


@end


#endif