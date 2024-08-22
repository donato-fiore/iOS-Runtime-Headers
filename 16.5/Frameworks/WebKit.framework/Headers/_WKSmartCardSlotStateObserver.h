// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _WKSMARTCARDSLOTSTATEOBSERVER_H
#define _WKSMARTCARDSLOTSTATEOBSERVER_H


#import <Foundation/Foundation.h>


@interface _WKSmartCardSlotStateObserver : NSObject {
    WeakPtr<WebKit::CcidService, WTF::DefaultWeakPtrImpl> m_service;
    RetainPtr<TKSmartCardSlot> m_slot;
}




-(id)initWithService:(*void)arg0 slot:(*void)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif