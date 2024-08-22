// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKQUADTRIE_H
#define MKQUADTRIE_H


#import <Foundation/Foundation.h>


@interface MKQuadTrie : NSObject {
    unsigned int _maxItems;
    ? _minSize;
    ? _initialRegion;
    *void __root;
}




-(BOOL)contains:(id)arg0 ;
-(BOOL)remove:(id)arg0 ;
-(NSUInteger)count;
-(id)_itemsInMapRect:(struct ? )arg0 ;
-(id)allItems;
-(id)breadthFirstDescription;
-(id)depthFirstDescription;
-(id)description;
-(id)initWithInitialRegion:(struct ? )arg0 minimumSize:(struct ? )arg1 maximumItems:(unsigned int)arg2 ;
-(id)itemDescriptions;
-(id)itemsInMapRect:(struct ? )arg0 ;
// -(id)itemsPassingRectTest:(id)arg0 coordinateTest:(unk)arg1  ;
-(void)clearAllItemsPerforming:(id)arg0 ;
-(void)dealloc;
-(void)foreach:(id)arg0 ;
-(void)insert:(id)arg0 ;


@end


#endif