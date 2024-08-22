// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIACTION_H
#define _UIACTION_H

@class NSString;
@protocol _UIActionGroupable;

#import <Foundation/Foundation.h>

#import "UIImage.h"

@interface _UIAction : NSObject <_UIActionGroupable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) NSUInteger options; // ivar: _options
@property (nonatomic) BOOL requiresAuthenticatedInput; // ivar: _requiresAuthenticatedInput
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger type; // ivar: _type


+(id)actionWithTitle:(id)arg0 image:(id)arg1 style:(NSInteger)arg2 handler:(id)arg3 ;
-(id)_apiRepresentation;
-(id)_initWithWithTitle:(id)arg0 image:(id)arg1 style:(NSInteger)arg2 handler:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)performAction;


@end


#endif