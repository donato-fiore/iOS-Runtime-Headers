// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OFPROPERTYANIMATIONLAYER_H
#define OFPROPERTYANIMATIONLAYER_H

@class CALayer;



@interface OFPropertyAnimationLayer : CALayer

@property (nonatomic) CGFloat animatedFloat;
@property (nonatomic) CGPoint animatedPoint;


+(BOOL)needsDisplayForKey:(id)arg0 ;
-(id)init;
-(id)initWithLayer:(id)arg0 ;
-(void)dealloc;


@end


#endif