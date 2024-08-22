// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UICOMMANDALTERNATE_H
#define UICOMMANDALTERNATE_H

@class NSString;
@protocol _UIMenuLeafAlternate, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UICommandAlternate : NSObject <_UIMenuLeafAlternate, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) SEL action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger modifierFlags; // ivar: _modifierFlags
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)alternateWithTitle:(id)arg0 action:(SEL)arg1 modifierFlags:(NSInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_leafKeyModifierFlags;
-(id)_resolvedTargetFromFirstTarget:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModifierFlags:(NSInteger)arg0 ;
-(id)initWithTitle:(id)arg0 action:(SEL)arg1 modifierFlags:(NSInteger)arg2 ;
-(void)_performWithTarget:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif