// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPREVIEWTARGET_H
#define UIPREVIEWTARGET_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface UIPreviewTarget : NSObject <NSCopying>



@property (readonly, nonatomic) CGPoint center; // ivar: _center
@property (readonly, nonatomic) UIView *container; // ivar: _container
@property (readonly, nonatomic) CGAffineTransform transform; // ivar: _transform


+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithContainer:(id)arg0 center:(struct CGPoint )arg1 ;
-(id)initWithContainer:(id)arg0 center:(struct CGPoint )arg1 transform:(struct CGAffineTransform )arg2 ;
-(void)dealloc;


@end


#endif