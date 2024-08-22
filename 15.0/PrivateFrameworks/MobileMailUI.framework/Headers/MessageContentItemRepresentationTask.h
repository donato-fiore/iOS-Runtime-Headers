// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MESSAGECONTENTITEMREPRESENTATIONTASK_H
#define MESSAGECONTENTITEMREPRESENTATIONTASK_H

@class NSProgress, EFPromise, EFFuture, EFLocked, NSString;
@protocol EMContentItem;

#import <Foundation/Foundation.h>


@interface MessageContentItemRepresentationTask : NSObject

@property (retain, nonatomic) NSObject<EMContentItem> *contentItem; // ivar: _contentItem
@property (retain, nonatomic) NSProgress *contentRequestProgress; // ivar: _contentRequestProgress
@property (retain, nonatomic) EFPromise *contentRequestPromise; // ivar: _contentRequestPromise
@property (readonly, nonatomic) EFFuture *future;
@property (retain, nonatomic) EFLocked *invokerIDs; // ivar: _invokerIDs
@property (nonatomic) NSInteger networkUsage; // ivar: _networkUsage
@property (readonly, nonatomic) NSProgress *progress;
@property (retain, nonatomic) NSProgress *topLevelProgress; // ivar: _topLevelProgress
@property (retain, nonatomic) NSString *type; // ivar: _type


-(BOOL)hasBeenAccessedByInvokerWithID:(id)arg0 ;
-(id)initWithContentItem:(id)arg0 type:(id)arg1 networkUsage:(NSInteger)arg2 ;
-(void)addAccessedByInvokerWithID:(id)arg0 ;
-(void)resume;


@end


#endif