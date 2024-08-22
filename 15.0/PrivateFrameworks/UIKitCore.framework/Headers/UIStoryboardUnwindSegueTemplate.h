// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISTORYBOARDUNWINDSEGUETEMPLATE_H
#define UISTORYBOARDUNWINDSEGUETEMPLATE_H

@class NSString;


#import "UIStoryboardSegueTemplate.h"

@interface UIStoryboardUnwindSegueTemplate : UIStoryboardSegueTemplate

@property (copy, nonatomic) NSString *action; // ivar: _action


-(id)_legacyUnwindExecutorForTarget:(id)arg0 ;
-(id)_perform:(id)arg0 ;
-(id)_performWithDestinationViewController:(id)arg0 sender:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)instantiateOrFindDestinationViewControllerWithSender:(id)arg0 ;
-(id)newDefaultPerformHandlerForSegue:(SEL)arg0 ;
-(id)segueWithDestinationViewController:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif