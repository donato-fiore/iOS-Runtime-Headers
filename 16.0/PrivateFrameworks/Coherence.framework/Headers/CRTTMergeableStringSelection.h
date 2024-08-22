// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRTTMERGEABLESTRINGSELECTION_H
#define CRTTMERGEABLESTRINGSELECTION_H


#import <Foundation/Foundation.h>


@interface CRTTMergeableStringSelection : NSObject {
    vector<std::pair<TopoID, TopoID>, std::allocator<std::pair<TopoID, TopoID>>> _selectionRanges;
}


@property (nonatomic) NSUInteger selectionAffinity; // ivar: _selectionAffinity


-(*void)selectionRanges;
-(BOOL)hasTopoIDsThatCanChange;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(void)updateTopoIDRange:(struct TopoIDRange )arg0 toNewRangeID:(struct TopoIDRange )arg1 ;


@end


#endif