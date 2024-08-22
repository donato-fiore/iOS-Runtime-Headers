// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTLAYOUTVALIDATIONBUNDLE_H
#define TSTLAYOUTVALIDATIONBUNDLE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TSTLayoutValidationBundle : NSObject {
    unordered_map<unsigned short, double, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, double>>> _columnToWidth;
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSMutableArray *widthHeightCollections; // ivar: _widthHeightCollections


-(CGFloat)widthOfColumn:(unsigned short)arg0 handleCacheMissUsingBlock:(id)arg1 ;
-(id)generateWidthHeightCollection;
-(id)init;
-(void)cacheWidth:(CGFloat)arg0 ofColumn:(unsigned short)arg1 ;


@end


#endif