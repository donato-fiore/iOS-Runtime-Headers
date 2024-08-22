// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKOFFERMANAGER_H
#define WLKOFFERMANAGER_H

@class NSXPCConnection, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WLKOfferManager : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) NSArray *offers; // ivar: _offers


+(id)_offerFullPath;
+(id)_offerPath;
+(id)defaultOfferManager;
-(id)_connection;
-(id)_updateOfferFile;
-(id)init;
-(void)_activeAccountChangedNotification:(id)arg0 ;
-(void)clearOffers:(id)arg0 ;
-(void)fetchOffers:(BOOL)arg0 completion:(id)arg1 ;
-(void)removeOfferByBadgeId:(id)arg0 completionHandler:(id)arg1 ;
-(void)saveOffer:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif