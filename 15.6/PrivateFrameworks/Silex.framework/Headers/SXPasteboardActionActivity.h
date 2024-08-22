// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXPASTEBOARDACTIONACTIVITY_H
#define SXPASTEBOARDACTIONACTIVITY_H

@class NSString, UIImage, UIPasteboard;
@protocol SXActionActivity;

#import <Foundation/Foundation.h>


@interface SXPasteboardActionActivity : NSObject <SXActionActivity>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, copy, nonatomic) UIPasteboard *pasteboard; // ivar: _pasteboard
@property (readonly, copy, nonatomic) NSString *string; // ivar: _string
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)initWithLabel:(id)arg0 image:(id)arg1 type:(NSUInteger)arg2 pasteboard:(id)arg3 string:(id)arg4 ;
-(id)initWithLabel:(id)arg0 type:(NSUInteger)arg1 pasteboard:(id)arg2 string:(id)arg3 ;
-(void)invokeWithAction:(id)arg0 invocationMethod:(NSUInteger)arg1 ;


@end


#endif