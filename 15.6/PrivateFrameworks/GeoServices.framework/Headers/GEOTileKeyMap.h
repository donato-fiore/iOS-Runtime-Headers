// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOTILEKEYMAP_H
#define GEOTILEKEYMAP_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface GEOTileKeyMap : NSObject <NSCopying>

 {
    NSInteger _type;
    *void _map;
}




-(NSUInteger)count;
-(id)contentsDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithMapType:(NSInteger)arg0 ;
-(id)initWithMapType:(NSInteger)arg0 capacity:(NSUInteger)arg1 ;
-(id)objectForKey:(struct _GEOTileKey *)arg0 ;
-(void)dealloc;
-(void)removeObjectForKey:(struct _GEOTileKey *)arg0 ;
-(void)reserveCapacity:(NSUInteger)arg0 ;
-(void)setObject:(id)arg0 forKey:(struct _GEOTileKey *)arg1 ;


@end


#endif