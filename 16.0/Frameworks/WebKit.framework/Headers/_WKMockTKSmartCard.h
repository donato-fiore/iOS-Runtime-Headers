// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WKMOCKTKSMARTCARD_H
#define _WKMOCKTKSMARTCARD_H

@class TKSmartCard;



@interface _WKMockTKSmartCard : TKSmartCard {
    WeakPtr<WebKit::MockCcidService, WTF::EmptyCounter> m_service;
}




-(id)initWithService:(*void)arg0 ;
-(void)beginSessionWithReply:(id)arg0 ;
-(void)transmitRequest:(id)arg0 reply:(id)arg1 ;


@end


#endif