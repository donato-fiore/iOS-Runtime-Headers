// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OZJSELEMENT_H
#define OZJSELEMENT_H

@protocol OZElementJSExport;

#import <Foundation/Foundation.h>


@interface OZJSElement : NSObject <OZElementJSExport>



@property (nonatomic) *void element; // ivar: _element
@property (nonatomic) float time; // ivar: _time


+(id)elementWithElement:(*void)arg0 ;
-(float)getEndTime;
-(float)getStartTime;
-(id)getBehaviorWithName:(id)arg0 ;
-(id)initWithElement:(*void)arg0 ;
-(id)name;
-(struct SCNVector3 )getPosition;
-(struct SCNVector3 )getPositionAtTime:(float)arg0 ;
-(unsigned int)ID;
-(void)clone;
-(void)cloneAtTime:(float)arg0 ;
-(void)disable;
-(void)enable;
-(void)setPosition:(struct SCNVector3 )arg0 ;
-(void)setRotation;
-(void)setStartTime:(float)arg0 ;


@end


#endif