// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TTMERGEABLESTRINGSELECTION_H
#define TTMERGEABLESTRINGSELECTION_H

@class NSString;
@protocol TTMergeableStringIDTracker;

#import <Foundation/Foundation.h>


@interface TTMergeableStringSelection : NSObject <TTMergeableStringIDTracker>

 {
    vector<std::pair<TopoID, TopoID>, std::allocator<std::pair<TopoID, TopoID>>> _selectionRanges;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger selectionAffinity; // ivar: _selectionAffinity
@property (readonly) Class superclass;


-(*void)selectionRanges;
-(BOOL)hasTopoIDsThatCanChange;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithArchive:(*void)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)serialize;
-(void)saveToArchive:(*void)arg0 ;
-(void)updateTopoIDRange:(struct TopoIDRange )arg0 toNewRangeID:(struct TopoIDRange )arg1 ;


@end


#endif