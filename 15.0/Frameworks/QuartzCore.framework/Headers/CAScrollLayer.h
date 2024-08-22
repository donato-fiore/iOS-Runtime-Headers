// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CASCROLLLAYER_H
#define CASCROLLLAYER_H

@class NSString;


#import "CALayer.h"

@interface CAScrollLayer : CALayer

@property (copy) NSString *scrollMode;


+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg0 ;
+(id)defaultValueForKey:(id)arg0 ;
-(struct CGRect )_visibleRectOfLayer:(id)arg0 ;
-(void)_scrollPoint:(struct CGPoint )arg0 fromLayer:(id)arg1 ;
-(void)_scrollRect:(struct CGRect )arg0 fromLayer:(id)arg1 ;
-(void)scrollToPoint:(struct CGPoint )arg0 ;
-(void)scrollToRect:(struct CGRect )arg0 ;


@end


#endif