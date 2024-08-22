// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSCYCLERCREATEBOOKMARKOPERATION_H
#define WBSCYCLERCREATEBOOKMARKOPERATION_H

@class NSString;
@protocol WBSCyclerContextualOperation;

#import <Foundation/Foundation.h>


@interface WBSCyclerCreateBookmarkOperation : NSObject <WBSCyclerContextualOperation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_randomListWithContext:(id)arg0 ;
-(void)_createRandomLeafWithContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)_createRandomListWithContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)executeWithContext:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif