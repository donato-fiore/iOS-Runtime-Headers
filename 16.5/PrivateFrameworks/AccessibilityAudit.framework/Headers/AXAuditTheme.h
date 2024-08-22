// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITTHEME_H
#define AXAUDITTHEME_H


#import <Foundation/Foundation.h>


@interface AXAuditTheme : NSObject



+(id)sharedTheme;
-(CGFloat)borderWidthForHighlightStyle:(NSUInteger)arg0 ;
-(id)backgroundColorForHighlightStyle:(NSUInteger)arg0 ;
-(id)borderColorForHighlightStyle:(NSUInteger)arg0 ;


@end


#endif