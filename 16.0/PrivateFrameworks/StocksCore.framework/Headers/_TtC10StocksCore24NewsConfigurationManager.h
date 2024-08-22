// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10STOCKSCORE24NEWSCONFIGURATIONMANAGER_H
#define _TTC10STOCKSCORE24NEWSCONFIGURATIONMANAGER_H

@protocol FCCoreConfigurationManager, FCNewsAppConfigurationManager;

#import <Foundation/Foundation.h>


@interface _TtC10StocksCore24NewsConfigurationManager : NSObject <FCCoreConfigurationManager, FCNewsAppConfigurationManager>

 {
    ? appConfigurationManager;
    ? coreConfigObservers;
    ? appConfigObservers;
    ? lastKnownAppConfig;
    ? lastKnownNewsConfig;
    ? configLock;
}




-(id)init;


@end


#endif