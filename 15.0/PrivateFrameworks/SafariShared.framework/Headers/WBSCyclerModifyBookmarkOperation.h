// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSCYCLERMODIFYBOOKMARKOPERATION_H
#define WBSCYCLERMODIFYBOOKMARKOPERATION_H

@class NSString;
@protocol WBSCyclerBookmarkOperation;

#import <Foundation/Foundation.h>


@interface WBSCyclerModifyBookmarkOperation : NSObject <WBSCyclerBookmarkOperation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_changeTitleOfBookmark:(id)arg0 withContext:(id)arg1 completionHandler:(id)arg2 ;
-(void)_changeURLOfBookmark:(id)arg0 withContext:(id)arg1 completionHandler:(id)arg2 ;
-(void)executeWithContext:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif