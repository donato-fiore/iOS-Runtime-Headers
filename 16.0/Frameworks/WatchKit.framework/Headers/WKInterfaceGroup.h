// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKINTERFACEGROUP_H
#define WKINTERFACEGROUP_H

@class NSString;
@protocol WKImageAnimatable;


#import "WKInterfaceObject.h"

@interface WKInterfaceGroup : WKInterfaceObject <WKImageAnimatable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)setBackgroundColor:(id)arg0 ;
-(void)setBackgroundImage:(id)arg0 ;
-(void)setBackgroundImageData:(id)arg0 ;
-(void)setBackgroundImageNamed:(id)arg0 ;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;
-(void)setCornerRadius:(CGFloat)arg0 ;
-(void)startAnimating;
-(void)startAnimatingWithImagesInRange:(struct _NSRange )arg0 duration:(CGFloat)arg1 repeatCount:(NSInteger)arg2 ;
-(void)stopAnimating;


@end


#endif