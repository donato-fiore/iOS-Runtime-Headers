// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFUNIFIEDTABBARITEMAVAILABILITYACTION_H
#define SFUNIFIEDTABBARITEMAVAILABILITYACTION_H

@class UIImage, NSString;

#import <Foundation/Foundation.h>


@interface SFUnifiedTabBarItemAvailabilityAction : NSObject

@property (readonly, copy, nonatomic) id *action; // ivar: _action
@property (readonly, nonatomic) NSInteger buttonType; // ivar: _buttonType
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithTitle:(id)arg0 image:(id)arg1 buttonType:(NSInteger)arg2 action:(id)arg3 ;
-(void)performAction;


@end


#endif