// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPSHAPEREPMAGICMOVETEXTCHUNK_H
#define TSWPSHAPEREPMAGICMOVETEXTCHUNK_H

@class TSWPShapeRep, NSString, NSMutableIndexSet;

#import <Foundation/Foundation.h>


@interface TSWPShapeRepMagicMoveTextChunk : NSObject

@property (nonatomic) BOOL hasBackgroundShape; // ivar: _hasBackgroundShape
@property (nonatomic) BOOL hasListLabel; // ivar: _hasListLabel
@property (nonatomic) BOOL isVisible; // ivar: _isVisible
@property (nonatomic) CGFloat opacityFromRenderer; // ivar: _opacityFromRenderer
@property (nonatomic) _NSRange range; // ivar: _range
@property (nonatomic) TSWPShapeRep *rep; // ivar: _rep
@property (nonatomic) BOOL shouldTreatAsSingleCharacter; // ivar: _shouldTreatAsSingleCharacter
@property (nonatomic) NSInteger stageIndex; // ivar: _stageIndex
@property (copy, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (retain, nonatomic) NSMutableIndexSet *unhandledIndexSet; // ivar: _unhandledIndexSet


-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif