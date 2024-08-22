// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMCOREDUETWEBUSAGESOURCE_H
#define BMCOREDUETWEBUSAGESOURCE_H

@class NSMutableDictionary, NSString;
@protocol BMSourceProtocol, BMCoreDuetWebUsageStore;

#import <Foundation/Foundation.h>

#import "BMWebUsageEvent.h"
#import "BMSource.h"

@interface BMCoreDuetWebUsageSource : NSObject <BMSourceProtocol>

 {
    NSMutableDictionary *_contextUsageRecord;
    BMWebUsageEvent *_previousEvent;
    BMSource *_storeSource;
}


@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSObject<BMCoreDuetWebUsageStore> *storage; // ivar: _storage


-(id)initWithSource:(id)arg0 ;
-(void)sendEvent:(id)arg0 ;


@end


#endif