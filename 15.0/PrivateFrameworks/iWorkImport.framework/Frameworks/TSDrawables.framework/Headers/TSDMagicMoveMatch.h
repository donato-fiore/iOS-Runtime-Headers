// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDMAGICMOVEMATCH_H
#define TSDMAGICMOVEMATCH_H

@class NSString;
@protocol TSDMatchingAlgorithmMatch;

#import <Foundation/Foundation.h>

#import "TSDMagicMoveMatchObject.h"
#import "TSDTextureDescription.h"

@interface TSDMagicMoveMatch : NSObject <TSDMatchingAlgorithmMatch>



@property (nonatomic) CGFloat attributeMatchPercent; // ivar: _attributeMatchPercent
@property (nonatomic) CGFloat distance; // ivar: _distance
@property (readonly, nonatomic) id *incomingMatchObject;
@property (readonly, nonatomic) TSDMagicMoveMatchObject *incomingObject; // ivar: _incomingObject
@property (nonatomic) BOOL isShapeMatchOnlyWithoutText; // ivar: _isShapeMatchOnlyWithoutText
@property (readonly, nonatomic) BOOL isTextMatch;
@property (readonly, nonatomic) NSInteger matchCost; // ivar: _matchCost
@property (nonatomic) NSInteger matchType; // ivar: _matchType
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) id *outgoingMatchObject;
@property (readonly, nonatomic) TSDMagicMoveMatchObject *outgoingObject; // ivar: _outgoingObject
@property (retain, nonatomic) TSDTextureDescription *textureDescription; // ivar: _textureDescription
@property (nonatomic) CGFloat zOrderDistance; // ivar: _zOrderDistance


+(id)matchWithOutgoingObject:(id)arg0 incomingObject:(id)arg1 matchType:(NSInteger)arg2 attributeMatchPercent:(CGFloat)arg3 textureDescription:(id)arg4 ;
-(BOOL)conflictsWithMatch:(id)arg0 ;
-(id)description;
-(void)p_updateMagicMoveCost;


@end


#endif