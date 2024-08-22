// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITEXTFIELDDRAWINGBACKGROUNDPROVIDER_H
#define _UITEXTFIELDDRAWINGBACKGROUNDPROVIDER_H

@class UITextFieldBackgroundProvider;



@interface _UITextFieldDrawingBackgroundProvider : UITextFieldBackgroundProvider {
    ? _flags;
}


@property (nonatomic) BOOL drawsContent; // ivar: _drawsContent


-(id)init;
-(void)_buildDescription:(id)arg0 ;
-(void)addToTextField:(id)arg0 ;
-(void)drawInBounds:(struct CGRect )arg0 ;
-(void)removeFromTextField;
-(void)setNeedsDisplay;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif