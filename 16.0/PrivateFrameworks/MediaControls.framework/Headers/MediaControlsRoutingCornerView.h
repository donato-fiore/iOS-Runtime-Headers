// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MEDIACONTROLSROUTINGCORNERVIEW_H
#define MEDIACONTROLSROUTINGCORNERVIEW_H

@class CCUICAPackageView, NSString;
@protocol _UICursorInteractionDelegate;



@interface MediaControlsRoutingCornerView : CCUICAPackageView <_UICursorInteractionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger deviceType; // ivar: _deviceType
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=routesAreAvailable) BOOL routesAvailable; // ivar: _routesAvailable
@property (nonatomic, getter=isRouting) BOOL routing; // ivar: _routing
@property (readonly) Class superclass;


-(id)cursorInteraction:(id)arg0 regionForLocation:(struct CGPoint )arg1 defaultRegion:(id)arg2 ;
-(id)cursorInteraction:(id)arg0 styleForRegion:(id)arg1 modifiers:(NSInteger)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateGlyph;


@end


#endif