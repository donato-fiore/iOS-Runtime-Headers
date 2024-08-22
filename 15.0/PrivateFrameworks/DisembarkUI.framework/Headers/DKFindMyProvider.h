// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DKFINDMYPROVIDER_H
#define DKFINDMYPROVIDER_H

@class NSString;
@protocol DKFindMyProvider;

#import <Foundation/Foundation.h>


@interface DKFindMyProvider : NSObject <DKFindMyProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *stateChangeBlock; // ivar: _stateChangeBlock
@property (readonly) Class superclass;


-(void)_locatorStateDidChange:(id)arg0 ;
-(void)disableFindMyWithPresentingViewController:(id)arg0 completion:(id)arg1 ;
-(void)fetchFindMyState:(id)arg0 ;
-(void)preheatFindMyState;


@end


#endif