// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISTORYBOARDPRESENTATIONSEGUETEMPLATE_H
#define UISTORYBOARDPRESENTATIONSEGUETEMPLATE_H



#import "UIStoryboardSegueTemplate.h"

@interface UIStoryboardPresentationSegueTemplate : UIStoryboardSegueTemplate

@property (nonatomic) NSInteger modalPresentationStyle; // ivar: _modalPresentationStyle
@property (nonatomic) NSInteger modalTransitionStyle; // ivar: _modalTransitionStyle
@property (nonatomic) BOOL useDefaultModalPresentationStyle; // ivar: _useDefaultModalPresentationStyle
@property (nonatomic) BOOL useDefaultModalTransitionStyle; // ivar: _useDefaultModalTransitionStyle


-(id)initWithCoder:(id)arg0 ;
-(id)newDefaultPerformHandlerForSegue:(SEL)arg0 ;
-(id)newDefaultPrepareHandlerForSegue:(SEL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif