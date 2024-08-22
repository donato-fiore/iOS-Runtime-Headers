// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSEVENTSPROVIDER_H
#define TPSEVENTSPROVIDER_H

@protocol TPSEventsProviderDelegate;

#import <Foundation/Foundation.h>


@interface TPSEventsProvider : NSObject

@property (weak, nonatomic) NSObject<TPSEventsProviderDelegate> *delegate; // ivar: _delegate


-(void)deregisterAllEventsForCallback;
-(void)deregisterEventsForCallback:(id)arg0 ;
-(void)queryEvents:(id)arg0 ;
-(void)registerEventsForCallback:(id)arg0 ;
-(void)registerEventsForWakingCallback:(id)arg0 clientIdentifier:(id)arg1 ;


@end


#endif