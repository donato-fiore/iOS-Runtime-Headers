// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBACCESSIBILITYOBJECTWRAPPERBASE_H
#define WEBACCESSIBILITYOBJECTWRAPPERBASE_H


#import <Foundation/Foundation.h>


@interface WebAccessibilityObjectWrapperBase : NSObject {
    *void m_axObject;
}


@property (nonatomic) NSUInteger identifier; // ivar: _identifier


+(void)accessibilitySetShouldRepostNotifications:(BOOL)arg0 ;
-(*void)axBackingObject;
-(*void)updateObjectBackingStore;
-(BOOL)isIsolatedObject;
-(id)_accessibilityWebDocumentView;
-(id)accessibilityMathPostscriptPairs;
-(id)accessibilityMathPrescriptPairs;
-(id)accessibilityPlatformMathSubscriptKey;
-(id)accessibilityPlatformMathSuperscriptKey;
-(id)ariaLandmarkRoleDescription;
-(id)attachmentView;
-(id)baseAccessibilityDescription;
-(id)baseAccessibilityHelpText;
-(id)baseAccessibilityResolvedEditingStyles;
-(id)baseAccessibilitySpeechHint;
-(id)initWithAccessibilityObject:(*void)arg0 ;
-(id)innerHTML;
-(id)outerHTML;
-(struct CGPath *)convertPathToScreenSpace:(*void)arg0 ;
-(struct CGRect )convertRectToSpace:(struct FloatRect *)arg0 space:(int)arg1 ;
-(void)accessibilityPostedNotification:(id)arg0 ;
-(void)accessibilityPostedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)attachAXObject:(*void)arg0 ;
-(void)detach;


@end


#endif