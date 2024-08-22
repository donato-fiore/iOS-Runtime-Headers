// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MEDIACONTROLSROUTINGCORNERVIEW_H
#define MEDIACONTROLSROUTINGCORNERVIEW_H

@class CCUICAPackageView, NSString;
@protocol UIPointerInteractionDelegate;



@interface MediaControlsRoutingCornerView : CCUICAPackageView <UIPointerInteractionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger deviceType; // ivar: _deviceType
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=routesAreAvailable) BOOL routesAvailable; // ivar: _routesAvailable
@property (nonatomic, getter=isRouting) BOOL routing; // ivar: _routing
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)_updateGlyph;


@end


#endif