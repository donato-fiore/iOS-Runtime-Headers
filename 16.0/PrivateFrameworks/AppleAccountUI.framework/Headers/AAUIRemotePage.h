// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUIREMOTEPAGE_H
#define AAUIREMOTEPAGE_H

@class RUIPage, NSString;
@protocol PSStateRestoration;



@interface AAUIRemotePage : RUIPage <PSStateRestoration>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canBeShownFromSuspendedState;


@end


#endif