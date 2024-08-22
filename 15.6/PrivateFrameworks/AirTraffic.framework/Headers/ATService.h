// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATSERVICE_H
#define ATSERVICE_H

@class NSString, NSMutableSet, NSHashTable;
@protocol ATMessageLinkObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATService : NSObject <ATMessageLinkObserver>

 {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableSet *messageLinks; // ivar: _messageLinks
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)run;
-(BOOL)stop;
-(id)init;
-(id)messageLinkForIdentifier:(id)arg0 ;
-(void)addMessageLink:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)removeMessageLink:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif