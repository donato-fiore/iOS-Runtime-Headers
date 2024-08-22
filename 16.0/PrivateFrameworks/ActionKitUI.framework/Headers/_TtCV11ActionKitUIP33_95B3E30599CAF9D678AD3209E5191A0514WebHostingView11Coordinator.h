// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTCV11ACTIONKITUIP33_95B3E30599CAF9D678AD3209E5191A0514WEBHOSTINGVIEW11COORDINATOR_H
#define _TTCV11ACTIONKITUIP33_95B3E30599CAF9D678AD3209E5191A0514WEBHOSTINGVIEW11COORDINATOR_H

@protocol WKUIDelegate, WKNavigationDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV11ActionKitUIP33_95B3E30599CAF9D678AD3209E5191A0514WebHostingView11Coordinator : NSObject <WKUIDelegate, WKNavigationDelegate>

 {
    ? configuration;
    ? loadedRequest;
}




-(?)webView:(?)arg0 decidePolicyForNavigationActiondecisionHandler;
-(id)init;


@end


#endif