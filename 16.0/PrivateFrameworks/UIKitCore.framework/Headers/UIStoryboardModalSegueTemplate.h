// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISTORYBOARDMODALSEGUETEMPLATE_H
#define UISTORYBOARDMODALSEGUETEMPLATE_H



#import "UIStoryboardSegueTemplate.h"

@interface UIStoryboardModalSegueTemplate : UIStoryboardSegueTemplate

@property (nonatomic) NSInteger modalPresentationStyle; // ivar: _modalPresentationStyle
@property (nonatomic) NSInteger modalTransitionStyle; // ivar: _modalTransitionStyle
@property (nonatomic) BOOL useDefaultModalPresentationStyle; // ivar: _useDefaultModalPresentationStyle
@property (nonatomic) BOOL useDefaultModalTransitionStyle; // ivar: _useDefaultModalTransitionStyle


-(id)initWithCoder:(id)arg0 ;
-(id)newDefaultPerformHandlerForSegue:(SEL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif