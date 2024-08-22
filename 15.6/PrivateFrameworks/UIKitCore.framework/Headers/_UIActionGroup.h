// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIACTIONGROUP_H
#define _UIACTIONGROUP_H

@class NSArray, NSString;
@protocol _UIActionGroupable;

#import <Foundation/Foundation.h>

#import "UIImage.h"

@interface _UIActionGroup : NSObject <_UIActionGroupable>



@property (copy, nonatomic) NSArray *children; // ivar: _children
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) BOOL inlineGroup; // ivar: _inlineGroup
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger type; // ivar: _type


+(id)groupWithTitle:(id)arg0 image:(id)arg1 style:(NSInteger)arg2 children:(id)arg3 ;
-(id)_apiRepresentation;
-(id)_initWithTitle:(id)arg0 image:(id)arg1 style:(NSInteger)arg2 children:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif