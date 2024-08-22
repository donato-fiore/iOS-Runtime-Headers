// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSCYCLERMODIFYTABOPERATION_H
#define WBSCYCLERMODIFYTABOPERATION_H

@class NSString;
@protocol WBSCyclerContextualOperation;

#import <Foundation/Foundation.h>


@interface WBSCyclerModifyTabOperation : NSObject <WBSCyclerContextualOperation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_modifyRandomTabGroupWithContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)_modifyRandomTabWithContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)_updateTitleOfTab:(id)arg0 withContext:(id)arg1 completionHandler:(id)arg2 ;
-(void)_updateURLOfTab:(id)arg0 withContext:(id)arg1 completionHandler:(id)arg2 ;
-(void)executeWithContext:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif