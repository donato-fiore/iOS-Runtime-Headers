// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSCYCLERCREATETABOPERATION_H
#define WBSCYCLERCREATETABOPERATION_H

@class NSString;
@protocol WBSCyclerContextualOperation;

#import <Foundation/Foundation.h>


@interface WBSCyclerCreateTabOperation : NSObject <WBSCyclerContextualOperation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_createRandomTabGroupWithContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)_createRandomTabWithContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)executeWithContext:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif