// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PBITEMCOLLECTIONSERVICER_H
#define PBITEMCOLLECTIONSERVICER_H

@class NSMutableDictionary, NSString;
@protocol PBDataProviderProtocol;

#import <Foundation/Foundation.h>

#import "PBItemCollection.h"

@interface PBItemCollectionServicer : NSObject <PBDataProviderProtocol>

 {
    NSMutableDictionary *_cleanupQueue_cleanupHandlerByUUID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PBItemCollection *itemCollection; // ivar: _itemCollection
@property (readonly) Class superclass;


+(id)newServicerForConnection:(id)arg0 itemCollection:(id)arg1 ;
-(id)initWithConnection:(id)arg0 itemCollection:(id)arg1 ;
-(void)callCleanupBlockWithUUID:(id)arg0 ;
-(void)helloCompletionBlock:(id)arg0 ;
-(void)loadRepresentationForItemAtIndex:(NSUInteger)arg0 type:(id)arg1 completionBlock:(id)arg2 ;
-(void)waitForItemRequestsDeliveryCompletion:(id)arg0 ;


@end


#endif