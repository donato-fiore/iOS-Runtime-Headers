// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKCOMPLICATIONWIDGETMIGRATIONOBJECTPROVIDER_H
#define CLKCOMPLICATIONWIDGETMIGRATIONOBJECTPROVIDER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CLKComplicationWidgetMigrationObjectProvider : NSObject {
    NSMutableDictionary *_itemsByClientID;
}




-(id)init;
-(id)itemForClientIdentifier:(id)arg0 key:(id)arg1 ;
-(void)enumerateClientIdentifiersWithBlock:(id)arg0 ;
-(void)enumerateItemsForClientIdentifier:(id)arg0 withBlock:(id)arg1 ;
-(void)removeItemsForClientIdentifier:(id)arg0 ;
-(void)setItem:(id)arg0 forClientIdentifier:(id)arg1 key:(id)arg2 ;


@end


#endif