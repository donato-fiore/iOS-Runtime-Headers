// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHSIDEBARVISUALCONFIGURATION_H
#define SBHSIDEBARVISUALCONFIGURATION_H

@class NSString;
@protocol NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBHSidebarVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding>



@property (nonatomic, getter=isContentFullscreen) BOOL contentFullscreen; // ivar: _contentFullscreen
@property (nonatomic) CGFloat contentWidth; // ivar: _contentWidth
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat firstWidgetTopOffset; // ivar: _firstWidgetTopOffset
@property (readonly) NSUInteger hash;
@property (nonatomic) NSDirectionalEdgeInsets insets; // ivar: _insets
@property (nonatomic) CGFloat searchBarTopOffset; // ivar: _searchBarTopOffset
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)effectiveContentWidthWithContainerWidth:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif