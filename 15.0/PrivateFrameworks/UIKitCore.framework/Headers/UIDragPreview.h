// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIDRAGPREVIEW_H
#define UIDRAGPREVIEW_H

@class NSValue, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "_DUIPreview.h"
#import "UIDragPreviewParameters.h"
#import "UIView.h"

@interface UIDragPreview : NSObject <NSCopying>

 {
    NSValue *_preferredAnchorPoint;
}


@property (readonly, nonatomic) _DUIPreview *_duiPreview;
@property (copy, nonatomic) NSDictionary *_springboardParameters; // ivar: __springboardParameters
@property (nonatomic) BOOL _springboardPlatterStyle;
@property (nonatomic) BOOL avoidAnimation; // ivar: _avoidAnimation
@property (readonly, copy, nonatomic) UIDragPreviewParameters *parameters; // ivar: _parameters
@property (nonatomic) CGPoint preferredAnchorPoint;
@property (nonatomic, getter=_preventAfterScreenUpdatesSnapshot, setter=_setPreventAfterScreenUpdatesSnapshot:) BOOL preventAfterScreenUpdatesSnapshot; // ivar: _preventAfterScreenUpdatesSnapshot
@property (readonly, nonatomic) UIView *view; // ivar: _view


+(id)previewForURL:(id)arg0 ;
+(id)previewForURL:(id)arg0 title:(id)arg1 ;
+(struct CGSize )defaultBoundingSize;
+(struct CGSize )textBoundingSize;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithView:(id)arg0 ;
-(id)initWithView:(id)arg0 parameters:(id)arg1 ;


@end


#endif