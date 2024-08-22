// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOSDETAILSFLOATINGCARDLAYOUT_H
#define PXPHOTOSDETAILSFLOATINGCARDLAYOUT_H

@class NSString, NSDictionary, NSOrderedSet;
@protocol PXFloatingCardLayout;

#import <Foundation/Foundation.h>


@interface PXPhotosDetailsFloatingCardLayout : NSObject <PXFloatingCardLayout>



@property (readonly, nonatomic) CGRect _containerBounds; // ivar: __containerBounds
@property (readonly, nonatomic) BOOL canDrag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *heightsForIdentifier; // ivar: _heightsForIdentifier
@property (readonly, nonatomic) NSDictionary *identifiersForHeight; // ivar: _identifiersForHeight
@property (readonly, nonatomic) CGFloat initialHeight;
@property (readonly, nonatomic) NSUInteger initialPosition;
@property (readonly, nonatomic) UIEdgeInsets insets;
@property (readonly, nonatomic) NSOrderedSet *snappableHeights; // ivar: _snappableHeights
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat width;


-(id)initWithPhotosDetailsUIViewController:(id)arg0 widgetComposition:(id)arg1 ;
-(void)_configureForPhotosDetailsViewController:(id)arg0 composition:(id)arg1 ;
-(void)didUpdateCardHeight:(CGFloat)arg0 ;
-(void)didUpdateCardPosition:(NSUInteger)arg0 ;


@end


#endif