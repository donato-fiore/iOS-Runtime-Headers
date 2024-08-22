// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTUIBITMAPHANDVIEW_H
#define MTUIBITMAPHANDVIEW_H

@class UIView, NSArray;



@interface MTUIBitmapHandView : UIView {
    NSArray *_partViews;
    NSArray *_partViewsMaintainingOrientation;
}




+(id)partInfoWithName:(id)arg0 ;
+(id)partInfoWithName:(id)arg0 offset:(struct CGPoint )arg1 maintainsOrientation:(BOOL)arg2 ;
-(id)initWithBundle:(id)arg0 resourcePath:(id)arg1 partInfoList:(id)arg2 rotationalCenter:(struct CGPoint )arg3 ;
-(id)initWithImage:(id)arg0 rotationalCenter:(struct CGPoint )arg1 ;


@end


#endif