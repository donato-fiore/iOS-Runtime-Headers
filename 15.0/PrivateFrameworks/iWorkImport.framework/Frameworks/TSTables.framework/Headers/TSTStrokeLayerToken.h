// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTSTROKELAYERTOKEN_H
#define TSTSTROKELAYERTOKEN_H

@class NSString, TSDStroke;
@protocol TSTStrokeLayerStrokeAndRange;

#import <Foundation/Foundation.h>


@interface TSTStrokeLayerToken : NSObject <TSTStrokeLayerStrokeAndRange>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int order; // ivar: _order
@property (nonatomic) NSUInteger position; // ivar: _position
@property (nonatomic) TSTSimpleRange range; // ivar: _range
@property (retain, nonatomic) TSDStroke *stroke; // ivar: _stroke
@property (readonly) Class superclass;


+(id)tokenWithStroke:(id)arg0 range:(struct TSTSimpleRange )arg1 order:(int)arg2 andPosition:(NSUInteger)arg3 ;
-(id)initWithStroke:(id)arg0 range:(struct TSTSimpleRange )arg1 order:(int)arg2 andPosition:(NSUInteger)arg3 ;


@end


#endif