// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPRESENTATIONOPTIONS_H
#define MUPRESENTATIONOPTIONS_H

@class UIBarButtonItem, UIViewController, UIView;
@protocol NSCopying, MKActivityObserving;

#import <Foundation/Foundation.h>


@interface MUPresentationOptions : NSObject <NSCopying>



@property (retain, nonatomic) UIBarButtonItem *barButtonItem; // ivar: _barButtonItem
@property (retain, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (retain, nonatomic) NSObject<MKActivityObserving> *progressObserver; // ivar: _progressObserver
@property (nonatomic) CGRect sourceRect; // ivar: _sourceRect
@property (retain, nonatomic) UIView *sourceView; // ivar: _sourceView


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif