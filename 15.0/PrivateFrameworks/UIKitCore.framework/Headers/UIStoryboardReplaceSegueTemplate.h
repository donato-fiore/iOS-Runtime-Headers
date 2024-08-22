// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISTORYBOARDREPLACESEGUETEMPLATE_H
#define UISTORYBOARDREPLACESEGUETEMPLATE_H



#import "UIStoryboardSegueTemplate.h"

@interface UIStoryboardReplaceSegueTemplate : UIStoryboardSegueTemplate

@property (nonatomic) NSInteger destinationContainmentContext; // ivar: _destinationContainmentContext
@property (nonatomic) NSInteger splitViewControllerIndex; // ivar: _splitViewControllerIndex


-(id)initWithCoder:(id)arg0 ;
-(id)newDefaultPerformHandlerForSegue:(SEL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif