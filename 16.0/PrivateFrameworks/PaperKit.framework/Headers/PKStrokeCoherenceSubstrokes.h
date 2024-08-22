// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSTROKECOHERENCESUBSTROKES_H
#define PKSTROKECOHERENCESUBSTROKES_H

@class PKStrokeMask, NSUUID, PKInk;


#import "PKStrokeCoherenceBase.h"

@interface PKStrokeCoherenceSubstrokes : PKStrokeCoherenceBase {
    ? substrokes;
}


@property (nonatomic) CGRect _bounds;
@property (nonatomic) ? _flags;
@property (nonatomic) BOOL _hidden;
@property (nonatomic, retain) PKStrokeMask *_strokeMask;
@property (nonatomic, copy) NSUUID *_strokeUUID;
@property (nonatomic, readonly) BOOL hasSubstrokes;
@property (nonatomic, copy) PKInk *ink;


-(BOOL)_isHidden;
-(NSInteger)_pointsCount;
-(id)_substrokesInDrawing:(id)arg0 ;
-(id)descriptionAtDepth:(NSInteger)arg0 ;
-(id)init;
-(void)_setFlags:(struct ? )arg0 ;
-(void)_setHidden:(BOOL)arg0 ;
-(void)_setStrokeMask:(id)arg0 ;
-(void)_setStrokeUUID:(id)arg0 ;


@end


#endif