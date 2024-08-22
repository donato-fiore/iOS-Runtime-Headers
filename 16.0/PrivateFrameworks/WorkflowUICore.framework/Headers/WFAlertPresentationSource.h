// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFALERTPRESENTATIONSOURCE_H
#define WFALERTPRESENTATIONSOURCE_H

@class UIBarButtonItem, UIView;

#import <Foundation/Foundation.h>


@interface WFAlertPresentationSource : NSObject

@property (readonly, nonatomic) UIBarButtonItem *barButtonItem; // ivar: _barButtonItem
@property (nonatomic) BOOL canOverlapSourceViewRect; // ivar: _canOverlapSourceViewRect
@property (nonatomic) NSUInteger permittedArrowDirections; // ivar: _permittedArrowDirections
@property (readonly, nonatomic) CGRect sourceRect; // ivar: _sourceRect
@property (readonly, nonatomic) UIView *sourceView; // ivar: _sourceView


+(id)sourceWithBarButtonItem:(id)arg0 ;
+(id)sourceWithView:(id)arg0 ;
+(id)sourceWithView:(id)arg0 rect:(struct CGRect )arg1 ;
-(id)init;
-(id)initWithSourceView:(id)arg0 sourceRect:(struct CGRect )arg1 barButtonItem:(id)arg2 ;


@end


#endif