// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHSWIDGETCONFIGURATIONREADER_H
#define CHSWIDGETCONFIGURATIONREADER_H


#import <Foundation/Foundation.h>

#import "CHSChronoServicesConnection.h"

@interface CHSWidgetConfigurationReader : NSObject {
    CHSChronoServicesConnection *_connection;
}




-(id)_transformResults:(id)arg0 ;
-(id)init;
-(void)allConfiguredWidgetsWithCompletion:(id)arg0 ;


@end


#endif