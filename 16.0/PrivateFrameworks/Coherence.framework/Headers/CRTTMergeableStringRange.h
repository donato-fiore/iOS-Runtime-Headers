// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRTTMERGEABLESTRINGRANGE_H
#define CRTTMERGEABLESTRINGRANGE_H


#import <Foundation/Foundation.h>


@interface CRTTMergeableStringRange : NSObject

@property (nonatomic) NSInteger maxCounter; // ivar: _maxCounter
@property (readonly, nonatomic) TopoIDRange range; // ivar: _range
@property (nonatomic) NSInteger renameGeneration; // ivar: _renameGeneration


-(BOOL)isEqual:(id)arg0 ;
-(id)_objCRenameSequence;
-(id)description;
-(id)initWithTopoIDRange:(struct TopoIDRange )arg0 renameGeneration:(NSInteger)arg1 maxCounter:(NSInteger)arg2 ;
-(id)subrangeFrom:(struct _NSRange )arg0 ;
-(void)dealloc;


@end


#endif