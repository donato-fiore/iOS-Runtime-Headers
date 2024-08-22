// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GTDATAPROVIDERSTORE_H
#define GTDATAPROVIDERSTORE_H

@class NSMutableDictionary;
@protocol GTDataProviderService, OS_os_log;

#import <Foundation/Foundation.h>


@interface GTDataProviderStore : NSObject <GTDataProviderService>

 {
    NSObject<OS_os_log> *_log;
    NSMutableDictionary *_dataStore;
}




-(id)getData:(NSUInteger)arg0 ;
-(id)initWithConnection:(id)arg0 ;
-(void)uploadFragment:(id)arg0 forHandle:(NSUInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif