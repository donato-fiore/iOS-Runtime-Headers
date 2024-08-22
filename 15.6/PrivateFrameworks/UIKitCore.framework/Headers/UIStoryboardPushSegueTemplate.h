// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISTORYBOARDPUSHSEGUETEMPLATE_H
#define UISTORYBOARDPUSHSEGUETEMPLATE_H



#import "UIStoryboardSegueTemplate.h"

@interface UIStoryboardPushSegueTemplate : UIStoryboardSegueTemplate

@property (nonatomic) NSInteger destinationContainmentContext; // ivar: _destinationContainmentContext
@property (nonatomic) NSInteger splitViewControllerIndex; // ivar: _splitViewControllerIndex


-(id)initWithCoder:(id)arg0 ;
-(id)newDefaultPerformHandlerForSegue:(SEL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif