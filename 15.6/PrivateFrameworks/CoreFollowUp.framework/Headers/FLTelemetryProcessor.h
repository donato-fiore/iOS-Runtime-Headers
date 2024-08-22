// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLTELEMETRYPROCESSOR_H
#define FLTELEMETRYPROCESSOR_H

@protocol FLTelemetryController;

#import <Foundation/Foundation.h>


@interface FLTelemetryProcessor : NSObject {
    NSObject<FLTelemetryController> *_telemetryController;
}




-(id)initWithController:(id)arg0 ;
-(void)processCurrentItems:(id)arg0 ;
-(void)processItemAddition:(id)arg0 ;
-(void)processItemRemoval:(id)arg0 ;


@end


#endif