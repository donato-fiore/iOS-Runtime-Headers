// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSCYCLERDELETETABOPERATION_H
#define WBSCYCLERDELETETABOPERATION_H

@class NSString;
@protocol WBSCyclerContextualOperation;

#import <Foundation/Foundation.h>


@interface WBSCyclerDeleteTabOperation : NSObject <WBSCyclerContextualOperation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_deleteItemWithIdentifier:(id)arg0 inContext:(id)arg1 completionHandler:(id)arg2 ;
-(void)_deleteRandomTabGroupWithContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)_deleteRandomTabWithContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)executeWithContext:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif