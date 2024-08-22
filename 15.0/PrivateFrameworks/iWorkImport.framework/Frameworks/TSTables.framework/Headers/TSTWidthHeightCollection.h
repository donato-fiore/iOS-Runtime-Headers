// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTWIDTHHEIGHTCOLLECTION_H
#define TSTWIDTHHEIGHTCOLLECTION_H


#import <Foundation/Foundation.h>


@interface TSTWidthHeightCollection : NSObject {
    vector<std::pair<TSUCellCoord, double>, std::allocator<std::pair<TSUCellCoord, double>>> _fittingHeights;
    unordered_map<unsigned short, double, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, double>>> _columnToMaxFittingWidths;
}


@property (readonly, nonatomic) BOOL hasWorkItems;


-(void)addFittingHeight:(CGFloat)arg0 forCellID:(struct TSUCellCoord )arg1 ;
-(void)addFittingWidth:(CGFloat)arg0 forCellID:(struct TSUCellCoord )arg1 ;
-(void)enumerateFittingHeightsUsingBlock:(id)arg0 ;
-(void)enumerateFittingWidthsUsingBlock:(id)arg0 ;


@end


#endif