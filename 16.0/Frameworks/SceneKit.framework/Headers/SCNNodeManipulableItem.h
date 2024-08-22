// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNNODEMANIPULABLEITEM_H
#define SCNNODEMANIPULABLEITEM_H



#import "SCNManipulableItem.h"

@interface SCNNodeManipulableItem : SCNManipulableItem



+(id)nodeManipulatorItemWithNode:(id)arg0 screenSize:(CGFloat)arg1 ;
+(void)addItems:(id)arg0 toScene:(id)arg1 ;
+(void)removeItemsFromScene:(id)arg0 ;
-(BOOL)isNodeManipulator;
-(id)cloneForManipulators;
-(id)parentItem;
-(struct SCNMatrix4 )transform;
-(struct SCNMatrix4 )worldTransform;
-(struct SCNVector3 )scale;
-(void)setPosition:(struct SCNVector3 )arg0 ;
-(void)setTransform:(struct SCNMatrix4 )arg0 ;
-(void)setWorldTransform:(struct SCNMatrix4 )arg0 ;
-(void)validateClone;


@end


#endif