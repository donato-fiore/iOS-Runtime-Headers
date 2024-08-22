// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXBLOCKACTIONACTIVITY_H
#define SXBLOCKACTIONACTIVITY_H

@class NSString, UIImage;
@protocol SXActionActivity;

#import <Foundation/Foundation.h>


@interface SXBlockActionActivity : NSObject <SXActionActivity>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) id *genericBlock; // ivar: _genericBlock
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, copy, nonatomic) id *immediateBlock; // ivar: _immediateBlock
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (readonly, copy, nonatomic) id *userSelectedBlock; // ivar: _userSelectedBlock


-(id)initWithLabel:(id)arg0 image:(id)arg1 type:(NSUInteger)arg2 block:(id)arg3 ;
-(id)initWithLabel:(id)arg0 type:(NSUInteger)arg1 block:(id)arg2 ;
// -(id)initWithLabel:(id)arg0 type:(NSUInteger)arg1 immediateBlock:(id)arg2 userSelectedBlock:(unk)arg3  ;
-(void)invokeWithAction:(id)arg0 invocationMethod:(NSUInteger)arg1 ;


@end


#endif