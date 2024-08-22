// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLMAPENUMERATOR_H
#define CPLMAPENUMERATOR_H

@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface CPLMapEnumerator : NSObject <NSFastEnumeration>

 {
    id<NSFastEnumeration> *_enumerator;
    *id _resultValues;
    NSUInteger _previousResultValuesLength;
    NSUInteger _previousResultValuesCount;
    NSUInteger _previousItemsPtrLength;
    *id _itemsPtr;
}


@property (readonly, nonatomic) id *mapBlock; // ivar: _mapBlock


-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)initWithEnumerator:(id)arg0 ;
-(id)initWithEnumerator:(id)arg0 map:(id)arg1 ;
-(void)dealloc;


@end


#endif