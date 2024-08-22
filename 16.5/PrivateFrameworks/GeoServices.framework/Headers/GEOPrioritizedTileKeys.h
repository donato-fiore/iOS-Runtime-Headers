// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPRIORITIZEDTILEKEYS_H
#define GEOPRIORITIZEDTILEKEYS_H


#import <Foundation/Foundation.h>


@interface GEOPrioritizedTileKeys : NSObject {
    *void _keysAndPriorities;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) unsigned int highestPriority;


-(BOOL)popHighestPriorityKey:(struct _GEOTileKey *)arg0 priority:(*unsigned int)arg1 ;
-(id)init;
-(id)initWithKeys:(id)arg0 priorities:(id)arg1 ;
-(void)dealloc;
-(void)removeKey:(struct _GEOTileKey *)arg0 ;
-(void)setPriority:(unsigned int)arg0 forKey:(struct _GEOTileKey *)arg1 ;


@end


#endif