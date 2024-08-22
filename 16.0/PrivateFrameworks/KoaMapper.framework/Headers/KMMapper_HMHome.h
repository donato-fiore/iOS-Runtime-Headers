// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KMMAPPER_HMHOME_H
#define KMMAPPER_HMHOME_H

@class KVItemBuilder, NSMutableArray, NSString;
@protocol KMMapper;

#import <Foundation/Foundation.h>


@interface KMMapper_HMHome : NSObject <KMMapper>

 {
    KVItemBuilder *_builder;
    NSMutableArray *_items;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)externalObjectClass;
-(BOOL)_addItemWithItemId:(id)arg0 assistantHomeKitId:(id)arg1 fieldType:(NSInteger)arg2 name:(id)arg3 error:(*id)arg4 ;
-(NSInteger)targetItemType;
-(id)init;
-(id)itemsFromExternalObject:(id)arg0 additionalFields:(id)arg1 error:(*id)arg2 ;


@end


#endif