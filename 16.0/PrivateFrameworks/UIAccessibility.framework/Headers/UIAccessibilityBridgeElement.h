// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIACCESSIBILITYBRIDGEELEMENT_H
#define UIACCESSIBILITYBRIDGEELEMENT_H

@class UIAccessibilityElement, NSArray, NSData;
@protocol UIAccessibilityBridgeAXActionHandler;



@interface UIAccessibilityBridgeElement : UIAccessibilityElement

@property (retain, nonatomic) NSArray *accessibilityActionsForRemoteDevice; // ivar: _accessibilityActionsForRemoteDevice
@property (weak, nonatomic) NSObject<UIAccessibilityBridgeAXActionHandler> *axActionHandler; // ivar: _axActionHandler
@property (retain, nonatomic) NSData *elementRefData; // ivar: _elementRefData
@property (nonatomic) BOOL isAXScrollAncestor; // ivar: _isAXScrollAncestor


-(BOOL)_accessibilityIsScrollAncestor;
-(void)overrideAccessibilityMethodsForRemoteDevice;


@end


#endif