// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHSWIDGETCONFIGURATIONREADER_H
#define CHSWIDGETCONFIGURATIONREADER_H

@protocol CHSChronoWidgetServiceServer;

#import <Foundation/Foundation.h>


@interface CHSWidgetConfigurationReader : NSObject {
    id<CHSChronoWidgetServiceServer> *_server;
}




-(id)_transformResults:(id)arg0 ;
-(id)init;
-(void)allConfiguredWidgetsWithCompletion:(id)arg0 ;


@end


#endif