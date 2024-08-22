// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIANALYTICSFBFSTORAGE_H
#define SIRIANALYTICSFBFSTORAGE_H


#import <Foundation/Foundation.h>


@interface SiriAnalyticsFBFStorage : NSObject {
    ? applicationIdentifier;
    ? telemetry;
}




-(id)init;
-(id)initWithApplicationIdentifier:(id)arg0 telemetry:(id)arg1 ;
-(void)store:(id)arg0 completion:(id)arg1 ;


@end


#endif