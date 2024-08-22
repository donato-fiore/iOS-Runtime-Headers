// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKPROCESSPOOLWEAKOBSERVER_H
#define WKPROCESSPOOLWEAKOBSERVER_H


#import <Foundation/Foundation.h>


@interface WKProcessPoolWeakObserver : NSObject {
    WeakPtr<WebKit::WebProcessPool, WTF::EmptyCounter> m_weakPtr;
}




-(id)initWithWeakPtr:(*void)arg0 ;


@end


#endif