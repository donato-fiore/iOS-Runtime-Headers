// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXTRANSITIONDATASOURCENODE_H
#define SXTRANSITIONDATASOURCENODE_H

@class NSString, UIView;
@protocol SXTransitionDataSource, SXTransitionableComponentView;

#import <Foundation/Foundation.h>


@interface SXTransitionDataSourceNode : NSObject <SXTransitionDataSource>



@property (readonly, nonatomic) NSObject<SXTransitionableComponentView> *componentView; // ivar: _componentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isTransitionable;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGRect transitionContainerFrame;
@property (readonly, nonatomic) UIView *transitionContainerView;
@property (readonly, nonatomic) CGRect transitionContentFrame;
@property (readonly, nonatomic) UIView *transitionContentView;
@property (readonly, nonatomic) NSUInteger transitionType; // ivar: _transitionType
@property (readonly, nonatomic) BOOL transitionViewIsVisible;
@property (readonly, nonatomic) BOOL transitionViewShouldFadeInContent;
@property (readonly, nonatomic) BOOL transitionViewUsesThumbnail;
@property (readonly, nonatomic) CGRect transitionVisibleFrame;
@property (readonly, nonatomic) BOOL usesThumbnail; // ivar: _usesThumbnail


-(id)initWithComponentView:(id)arg0 transitionType:(NSUInteger)arg1 usesThumbnail:(BOOL)arg2 ;


@end


#endif