// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBUIPOPOVEREXTENSIONCONTEXT_H
#define _SBUIPOPOVEREXTENSIONCONTEXT_H

@class NSExtensionContext;
@protocol _SBUIPopoverExtensionHostInterface;



@interface _SBUIPopoverExtensionContext : NSExtensionContext

@property (weak, nonatomic) NSObject<_SBUIPopoverExtensionHostInterface> *hostService; // ivar: _hostService


-(void)requestDismiss;


@end


#endif