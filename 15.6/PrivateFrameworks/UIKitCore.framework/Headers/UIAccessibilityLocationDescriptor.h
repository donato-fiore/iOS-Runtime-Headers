// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIACCESSIBILITYLOCATIONDESCRIPTOR_H
#define UIACCESSIBILITYLOCATIONDESCRIPTOR_H

@class NSAttributedString, NSString;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface UIAccessibilityLocationDescriptor : NSObject

@property (readonly, nonatomic) NSAttributedString *attributedName; // ivar: _attributedName
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) CGPoint point; // ivar: _point
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithAttributedName:(id)arg0 point:(struct CGPoint )arg1 inView:(id)arg2 ;
-(id)initWithName:(id)arg0 point:(struct CGPoint )arg1 inView:(id)arg2 ;
-(id)initWithName:(id)arg0 view:(id)arg1 ;


@end


#endif