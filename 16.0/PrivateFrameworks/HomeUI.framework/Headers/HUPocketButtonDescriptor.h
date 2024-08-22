// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUPOCKETBUTTONDESCRIPTOR_H
#define HUPOCKETBUTTONDESCRIPTOR_H

@class UIColor, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HUPocketButtonDescriptor : NSObject

@property (nonatomic) SEL action; // ivar: _action
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) id *block; // ivar: _block
@property (nonatomic) NSUInteger style; // ivar: _style
@property (weak, nonatomic) id *target; // ivar: _target
@property (readonly, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSObject<NSCopying> *userInfo; // ivar: _userInfo


+(id)descriptorWithTitle:(id)arg0 style:(NSUInteger)arg1 target:(id)arg2 action:(SEL)arg3 userInfo:(id)arg4 ;
+(id)descriptorWithTitle:(id)arg0 style:(NSUInteger)arg1 userInfo:(id)arg2 block:(id)arg3 ;
-(void)execute;


@end


#endif