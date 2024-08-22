// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKCOMPLICATIONWIDGETMIGRATIONOBJECTPROVIDER_H
#define CLKCOMPLICATIONWIDGETMIGRATIONOBJECTPROVIDER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CLKComplicationWidgetMigrationObjectProvider : NSObject {
    NSMutableDictionary *_itemsByAppIdentifier;
}




-(id)init;
-(id)itemForAppIdentifier:(id)arg0 key:(id)arg1 ;
-(void)enumerateAppIdentifiersWithBlock:(id)arg0 ;
-(void)enumerateItemsForAppIdentifier:(id)arg0 withBlock:(id)arg1 ;
-(void)removeItemsForAppIdentifier:(id)arg0 ;
-(void)setItem:(id)arg0 forAppIdentifier:(id)arg1 key:(id)arg2 ;


@end


#endif