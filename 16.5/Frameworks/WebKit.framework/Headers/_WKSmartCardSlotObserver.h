// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _WKSMARTCARDSLOTOBSERVER_H
#define _WKSMARTCARDSLOTOBSERVER_H


#import <Foundation/Foundation.h>


@interface _WKSmartCardSlotObserver : NSObject {
    WeakPtr<WebKit::CcidService, WTF::DefaultWeakPtrImpl> m_service;
}




-(id)initWithService:(*void)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif