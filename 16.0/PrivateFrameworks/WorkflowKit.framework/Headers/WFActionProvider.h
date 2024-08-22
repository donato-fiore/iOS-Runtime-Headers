// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFACTIONPROVIDER_H
#define WFACTIONPROVIDER_H

@class INStringLocalizer;
@protocol WFActionProviderDelegate;

#import <Foundation/Foundation.h>


@interface WFActionProvider : NSObject

@property (weak, nonatomic) NSObject<WFActionProviderDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) INStringLocalizer *stringLocalizer; // ivar: _stringLocalizer


-(id)availableActionIdentifiers;
-(id)createAllAvailableActions;
-(void)createActionsForRequests:(id)arg0 ;
-(void)deleteCache;
-(void)updateCache:(id)arg0 ;


@end


#endif