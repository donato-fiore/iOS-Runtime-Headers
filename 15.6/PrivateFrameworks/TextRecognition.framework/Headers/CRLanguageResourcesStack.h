// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRLANGUAGERESOURCESSTACK_H
#define CRLANGUAGERESOURCESSTACK_H

@class NSMutableArray, NSString, NSMutableSet;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface CRLanguageResourcesStack : NSObject

@property (retain) NSMutableArray *availableResources; // ivar: _availableResources
@property (retain) NSString *localeIdentifier; // ivar: _localeIdentifier
@property (retain) NSObject<OS_dispatch_semaphore> *resourceCountSemaphore; // ivar: _resourceCountSemaphore
@property NSInteger resourceType; // ivar: _resourceType
@property (retain) NSMutableSet *subscribers; // ivar: _subscribers
@property NSInteger totalResources; // ivar: _totalResources


-(BOOL)hasSubscriber:(id)arg0 ;
-(NSInteger)subscriberCount;
-(id)initWithLocaleIdentifier:(id)arg0 resourceType:(NSInteger)arg1 ;
-(id)popResource;
-(void)addSubscriber:(id)arg0 ;
-(void)pushResource:(id)arg0 ;
-(void)removeSubscriber:(id)arg0 ;


@end


#endif