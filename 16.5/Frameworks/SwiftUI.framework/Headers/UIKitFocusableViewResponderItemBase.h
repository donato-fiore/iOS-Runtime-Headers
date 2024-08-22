// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKITFOCUSABLEVIEWRESPONDERITEMBASE_H
#define UIKITFOCUSABLEVIEWRESPONDERITEMBASE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface UIKitFocusableViewResponderItemBase : NSObject

@property (readonly, nonatomic) NSString *swiftui_focusGroupIdentifier;


-(id)_regionForFocusedItem:(id)arg0 inCoordinateSpace:(id)arg1 ;
-(id)focusGroupIdentifier;
-(id)swiftui_regionForFocusedItem:(id)arg0 inCoordinateSpace:(id)arg1 ;
-(void)_searchForFocusRegionsInContext:(id)arg0 ;
-(void)swiftui_searchForFocusRegionsInContext:(id)arg0 ;


@end


#endif