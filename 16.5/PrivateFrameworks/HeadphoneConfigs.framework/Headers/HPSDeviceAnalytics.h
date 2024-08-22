// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HPSDEVICEANALYTICS_H
#define HPSDEVICEANALYTICS_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HPSDeviceAnalytics : NSObject {
    NSString *_entryPoint;
    NSMutableDictionary *_analyticDict;
}




-(id)init;
-(void)resetAnalyticDict;
-(void)submitDeviceAnalytics;
-(void)updateEntryPoint:(int)arg0 ;
-(void)updateFeatureChangeCount:(int)arg0 ;
-(void)updateFeatureValue:(int)arg0 value:(unsigned int)arg1 featureValueString:(id)arg2 ;
-(void)updateProductID:(unsigned int)arg0 ;


@end


#endif