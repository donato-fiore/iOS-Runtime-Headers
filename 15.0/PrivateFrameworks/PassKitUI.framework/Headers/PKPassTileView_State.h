// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPASSTILEVIEW_STATE_H
#define PKPASSTILEVIEW_STATE_H

@class PKPassTile, PKPassTileImage, UIImage, PKPassTileAccessory, NSAttributedString;

#import <Foundation/Foundation.h>


@interface PKPassTileView_State : NSObject {
    PKPassTile *_source;
    BOOL _iconVisible;
    BOOL _titleVisible;
    BOOL _bodyVisible;
    BOOL _spinnerVisible;
    BOOL _buttonVisible;
    PKPassTileImage *_icon;
    UIImage *_iconImage;
    PKPassTileAccessory *_accessory;
    NSAttributedString *_title;
    NSAttributedString *_body;
    CGFloat _validUntil;
}




-(id)init;


@end


#endif