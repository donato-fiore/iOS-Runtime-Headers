// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UARPDYNAMICASSETANALYTICSEVENT_H
#define UARPDYNAMICASSETANALYTICSEVENT_H

@class NSURL, NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "UARPSuperBinaryAsset.h"

@interface UARPDynamicAssetAnalyticsEvent : NSObject {
    NSURL *_url;
    NSString *_eventName;
    NSDictionary *_eventDictionary;
    UARPSuperBinaryAsset *_asset;
}




-(BOOL)decomposeUARP;
-(id)description;
-(id)init;
-(id)initWithURL:(id)arg0 ;
-(void)send;


@end


#endif