// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSCYCLERMOVETABOPERATION_H
#define WBSCYCLERMOVETABOPERATION_H

@class NSString;
@protocol WBSCyclerContextualOperation;

#import <Foundation/Foundation.h>


@interface WBSCyclerMoveTabOperation : NSObject <WBSCyclerContextualOperation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_randomTabGroupWithTabsInContext:(id)arg0 notIntersecting:(id)arg1 ;
-(void)executeWithContext:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif