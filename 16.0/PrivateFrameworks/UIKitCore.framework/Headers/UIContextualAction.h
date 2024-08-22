// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UICONTEXTUALACTION_H
#define UICONTEXTUALACTION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "UIMenu.h"
#import "UIColor.h"
#import "UIImage.h"

@interface UIContextualAction : NSObject

@property (copy, nonatomic, setter=_setMenu:) UIMenu *_menu; // ivar: __menu
@property (copy, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (nonatomic) BOOL forcesFallbackBackgroundColor; // ivar: _forcesFallbackBackgroundColor
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (copy, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) BOOL isDestructive;
@property (copy, nonatomic) id *preHandler; // ivar: _preHandler
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)contextualActionWithStyle:(NSInteger)arg0 title:(id)arg1 handler:(id)arg2 ;
-(id)description;
-(void)_completeWithResult:(BOOL)arg0 ;
-(void)cancel;
-(void)executeHandlerWithView:(id)arg0 completionHandler:(id)arg1 ;
-(void)executePreHandlerWithView:(id)arg0 ;


@end


#endif