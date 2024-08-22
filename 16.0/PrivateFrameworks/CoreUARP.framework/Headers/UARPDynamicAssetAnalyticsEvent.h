// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UARPDYNAMICASSETANALYTICSEVENT_H
#define UARPDYNAMICASSETANALYTICSEVENT_H

@class NSURL, NSMutableArray;

#import <Foundation/Foundation.h>

#import "UARPSuperBinaryAsset.h"

@interface UARPDynamicAssetAnalyticsEvent : NSObject {
    NSURL *_url;
    UARPSuperBinaryAsset *_asset;
    NSMutableArray *_events;
}




+(id)tag;
-(BOOL)decomposeUARP;
-(id)description;
-(id)init;
-(id)initWithURL:(id)arg0 ;
-(void)send;


@end


#endif