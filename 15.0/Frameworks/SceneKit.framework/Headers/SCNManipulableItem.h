// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNMANIPULABLEITEM_H
#define SCNMANIPULABLEITEM_H


#import <Foundation/Foundation.h>

#import "SCNNode.h"

@interface SCNManipulableItem : NSObject {
    CGFloat _screenSize;
}


@property (retain, nonatomic) id *component; // ivar: component
@property (nonatomic) NSUInteger elementIndex; // ivar: elementIndex
@property (readonly, nonatomic) SCNVector3 elementPosition;
@property (retain, nonatomic) SCNNode *node; // ivar: node
@property (nonatomic) SCNMatrix4 transform;
@property (nonatomic) SCNMatrix4 worldTransform;


+(void)addItems:(id)arg0 toScene:(id)arg1 ;
+(void)removeItemsFromScene:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isNodeManipulator;
-(CGFloat)screenSize;
-(NSUInteger)hash;
-(id)cloneForManipulators;
-(id)parentItem;
-(struct SCNVector3 )scale;
-(void)dealloc;
-(void)setPosition:(struct SCNVector3 )arg0 ;
-(void)setScreenSize:(CGFloat)arg0 ;
-(void)validateClone;


@end


#endif