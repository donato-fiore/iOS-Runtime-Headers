// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC5TEAUIP33_01AB305DE961FE9633E4B4930A1B15A714IMAGEVIEWLAYER_H
#define _TTC5TEAUIP33_01AB305DE961FE9633E4B4930A1B15A714IMAGEVIEWLAYER_H

@class CALayer;



@interface _TtC5TeaUIP33_01AB305DE961FE9633E4B4930A1B15A714ImageViewLayer : CALayer {
    ? coordinateWithLayer;
}


@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) NSUInteger maskedCorners;
@property (nonatomic, retain) *CGColor shadowColor;
@property (nonatomic) CGSize shadowOffset;
@property (nonatomic) float shadowOpacity;
@property (nonatomic, retain) *CGPath shadowPath;
@property (nonatomic) CGFloat shadowRadius;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLayer:(id)arg0 ;


@end


#endif