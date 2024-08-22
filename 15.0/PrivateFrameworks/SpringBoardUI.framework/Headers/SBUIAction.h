// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBUIACTION_H
#define SBUIACTION_H

@class UIView, UIImage, NSString;

#import <Foundation/Foundation.h>


@interface SBUIAction : NSObject

@property (readonly, nonatomic) UIView *badgeView; // ivar: _badgeView
@property (readonly, copy, nonatomic) id *handler; // ivar: _handler
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSString *systemImageName; // ivar: _systemImageName
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(id)init;
-(id)initWithTitle:(id)arg0 handler:(id)arg1 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 handler:(id)arg2 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 image:(id)arg2 badgeView:(id)arg3 handler:(id)arg4 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 image:(id)arg2 handler:(id)arg3 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 systemImageName:(id)arg2 badgeView:(id)arg3 handler:(id)arg4 ;


@end


#endif