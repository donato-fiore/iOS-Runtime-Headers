// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKACCESSIBILITYWEBPAGEOBJECT_H
#define WKACCESSIBILITYWEBPAGEOBJECT_H

@class NSData;


#import "WKAccessibilityWebPageObjectBase.h"

@interface WKAccessibilityWebPageObject : WKAccessibilityWebPageObjectBase

@property (retain, nonatomic) NSData *remoteTokenData; // ivar: _remoteTokenData


-(CGFloat)pageScale;
-(id)accessibilityHitTest:(struct CGPoint )arg0 ;
-(id)init;
-(void)_accessibilityCategoryInstalled:(id)arg0 ;
-(void)dealloc;


@end


#endif