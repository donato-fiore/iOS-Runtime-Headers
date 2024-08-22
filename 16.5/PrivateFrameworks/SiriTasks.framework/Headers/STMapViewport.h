// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STMAPVIEWPORT_H
#define STMAPVIEWPORT_H

@class STSiriModelObject, NSArray;



@interface STMapViewport : STSiriModelObject

@property (nonatomic) CGFloat eastLongitude; // ivar: _eastLongitude
@property (nonatomic) CGFloat northLatitude; // ivar: _northLatitude
@property (nonatomic) CGFloat southLatitude; // ivar: _southLatitude
@property (nonatomic) CGFloat timeSinceViewportChanged; // ivar: _timeSinceViewportChanged
@property (nonatomic) CGFloat timeSinceViewportEnteredForeground; // ivar: _timeSinceViewportEnteredForeground
@property (copy, nonatomic) NSArray *viewportVertices; // ivar: _viewportVertices
@property (nonatomic) CGFloat westLongitude; // ivar: _westLongitude


+(BOOL)supportsSecureCoding;
-(id)_aceContextObjectValue;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif