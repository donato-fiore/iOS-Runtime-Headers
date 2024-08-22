// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHSAPPLICATIONPROCESSSTATECHANGECONSUMER_H
#define CHSAPPLICATIONPROCESSSTATECHANGECONSUMER_H

@protocol CHSChronoWidgetServiceServer;

#import <Foundation/Foundation.h>


@interface CHSApplicationProcessStateChangeConsumer : NSObject

@property (readonly, nonatomic) NSObject<CHSChronoWidgetServiceServer> *server; // ivar: _server


-(id)init;
-(id)initWithServer:(id)arg0 ;
-(void)applicationWithBundleIdentifierEnteredForeground:(id)arg0 ;


@end


#endif