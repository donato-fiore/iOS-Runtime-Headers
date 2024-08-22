// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSCYCLERMOVEBOOKMARKOPERATION_H
#define WBSCYCLERMOVEBOOKMARKOPERATION_H

@class NSString;
@protocol WBSCyclerBookmarkOperation;

#import <Foundation/Foundation.h>


@interface WBSCyclerMoveBookmarkOperation : NSObject <WBSCyclerBookmarkOperation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)executeWithContext:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif