// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPCONNECTIONSSOURCE_H
#define PPCONNECTIONSSOURCE_H

@protocol PPConnectionsLocationSourceDelegate;

#import <Foundation/Foundation.h>


@interface PPConnectionsSource : NSObject

@property (weak, nonatomic) NSObject<PPConnectionsLocationSourceDelegate> *delegate; // ivar: _delegate


+(id)identifier;
+(id)sharedInstance;


@end


#endif