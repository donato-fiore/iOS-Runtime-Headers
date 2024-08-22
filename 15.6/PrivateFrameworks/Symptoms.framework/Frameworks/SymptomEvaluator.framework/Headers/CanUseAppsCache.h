// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CANUSEAPPSCACHE_H
#define CANUSEAPPSCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CanUseAppsCache : NSObject {
    NSMutableDictionary *cache;
    BOOL disabled;
}




+(BOOL)makeVerdictFromRationaleCode:(int)arg0 ;
-(BOOL)hasEntryFor:(id)arg0 state:(NSInteger)arg1 rationaleCode:(*int)arg2 ;
-(id)_makeKeyFrom:(id)arg0 state:(NSInteger)arg1 ;
-(id)description;
-(id)init;
-(void)disable;
-(void)enable;
-(void)insertEntryFor:(id)arg0 state:(NSInteger)arg1 rationaleCode:(int)arg2 ;


@end


#endif