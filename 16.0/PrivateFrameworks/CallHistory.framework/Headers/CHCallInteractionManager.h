// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHCALLINTERACTIONMANAGER_H
#define CHCALLINTERACTIONMANAGER_H

@class NSString;
@protocol CHCallInteractionDataSourceDelegate, CHCallInteractionManager, CHCallInteractionDataSource;

#import <Foundation/Foundation.h>

#import "CHDelegateController.h"

@interface CHCallInteractionManager : NSObject <CHCallInteractionDataSourceDelegate, CHCallInteractionManager>



@property (readonly, nonatomic) NSObject<CHCallInteractionDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CHDelegateController *delegateController; // ivar: _delegateController
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithDataSource:(id)arg0 ;
-(void)addDelegate:(id)arg0 queue:(id)arg1 ;
-(void)callInteractionsDidChangeForDataSource:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;


@end


#endif