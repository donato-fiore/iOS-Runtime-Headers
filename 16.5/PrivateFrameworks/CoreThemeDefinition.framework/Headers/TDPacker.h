// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDPACKER_H
#define TDPACKER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "_TDPackerNode.h"

@interface TDPacker : NSObject {
    id *_sizeHandler;
    NSArray *_objectsToPack;
}


@property (readonly, nonatomic) NSUInteger countOfEmptyNodes;
@property (retain, nonatomic) NSArray *objectsToPack;
@property (retain) NSArray *packedObjects; // ivar: _packedObjects
@property (retain) _TDPackerNode *root; // ivar: _root


-(BOOL)objectAtIndexFit:(NSInteger)arg0 ;
-(id)_findNode:(id)arg0 ofSize:(struct CGSize )arg1 ;
-(id)_growDown:(struct CGSize )arg0 ;
-(id)_growNodeToSize:(struct CGSize )arg0 ;
-(id)_growRight:(struct CGSize )arg0 ;
-(id)_splitNode:(id)arg0 toSize:(struct CGSize )arg1 ;
-(id)sizeHandler:(SEL)arg0 ;
-(struct CGPoint )fitPositionOfObjectAtIndex:(NSInteger)arg0 ;
-(struct CGSize )enclosingSize;
-(void)_countOfEmptyNodes:(id)arg0 count:(*NSUInteger)arg1 ;
-(void)dealloc;
-(void)pack;
-(void)setSizeHandler:(id)arg0 ;


@end


#endif