// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFITEMPROVIDERRELOADRESULTS_H
#define HFITEMPROVIDERRELOADRESULTS_H

@class NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HFItemProviderReloadResults : NSObject <NSCopying>



@property (retain, nonatomic) NSSet *addedItems; // ivar: _addedItems
@property (readonly, nonatomic) NSSet *allItems;
@property (retain, nonatomic) NSSet *existingItems; // ivar: _existingItems
@property (retain, nonatomic) NSSet *removedItems; // ivar: _removedItems


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAddedItems:(id)arg0 removedItems:(id)arg1 existingItems:(id)arg2 ;
-(id)resultsByMergingWithResults:(id)arg0 ;


@end


#endif