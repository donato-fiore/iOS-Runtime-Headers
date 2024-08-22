// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKCONTACTLESSPAYMENTSESSIONSOUNDSMANAGER_H
#define NPKCONTACTLESSPAYMENTSESSIONSOUNDSMANAGER_H

@class NSString;
@protocol NPKContactlessPaymentSessionManagerObserver;

#import <Foundation/Foundation.h>


@interface NPKContactlessPaymentSessionSoundsManager : NSObject <NPKContactlessPaymentSessionManagerObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)contactlessPaymentSessionManager:(id)arg0 didChangeSessionState:(id)arg1 ;


@end


#endif