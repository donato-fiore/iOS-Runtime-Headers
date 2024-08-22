// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPFETCHERCONFIGURATION_H
#define LPFETCHERCONFIGURATION_H

@class WKWebView;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "LPEvent.h"

@interface LPFetcherConfiguration : NSObject <NSCopying>



@property (nonatomic) BOOL loadingIsNonAppInitiated; // ivar: _loadingIsNonAppInitiated
@property (nonatomic) NSInteger maximumResponseCount; // ivar: _maximumResponseCount
@property (retain, nonatomic) LPEvent *rootEvent; // ivar: _rootEvent
@property (retain, nonatomic) WKWebView *webViewForProcessSharing; // ivar: _webViewForProcessSharing


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;


@end


#endif