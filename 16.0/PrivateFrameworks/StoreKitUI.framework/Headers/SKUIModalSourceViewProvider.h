// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIMODALSOURCEVIEWPROVIDER_H
#define SKUIMODALSOURCEVIEWPROVIDER_H

@class UIView, UIBarButtonItem;
@protocol SKUIModalSourceViewProviderDelegate;

#import <Foundation/Foundation.h>


@interface SKUIModalSourceViewProvider : NSObject {
    BOOL _hideOriginalSourceView;
}


@property (weak, nonatomic) NSObject<SKUIModalSourceViewProviderDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIView *originalSourceView; // ivar: _originalSourceView
@property (retain, nonatomic) UIBarButtonItem *sourceButtonBarItem; // ivar: _sourceButtonBarItem
@property (retain, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo


-(id)animationView;
-(void)hideOriginalSourceView;
-(void)showOriginalSourceView;


@end


#endif