// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RPTBLOCKINTERACTION_H
#define RPTBLOCKINTERACTION_H

@protocol RPTInteraction;

#import <Foundation/Foundation.h>


@interface RPTBlockInteraction : NSObject <RPTInteraction>



@property (copy, nonatomic) id *actionsComposer; // ivar: _actionsComposer


-(id)initWithActions:(id)arg0 ;
-(void)invokeWithComposer:(id)arg0 duration:(CGFloat)arg1 ;


@end


#endif