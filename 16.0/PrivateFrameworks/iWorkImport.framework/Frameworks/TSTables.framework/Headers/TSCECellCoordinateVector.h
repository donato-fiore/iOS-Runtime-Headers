// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCECELLCOORDINATEVECTOR_H
#define TSCECELLCOORDINATEVECTOR_H

@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface TSCECellCoordinateVector : NSObject {
    vector<TSUCellCoord, std::allocator<TSUCellCoord>> _cellCoordinates;
    NSObject<OS_dispatch_semaphore> *_sem;
}




-(*void)cellCoordinates;
-(id)init;
-(id)initWithArchive:(*void)arg0 ;
-(struct unordered_set<TSUCellCoord, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<TSUCellCoord>> )cellCoordinatesSet;
-(void)addCellCoordinate:(struct TSUCellCoord )arg0 ;
-(void)removeAllCellCoordinates;
-(void)saveToArchive:(*void)arg0 ;


@end


#endif