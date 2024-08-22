// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSDUETPERSONALIZATIONPROVIDER_H
#define TPSDUETPERSONALIZATIONPROVIDER_H


#import <Foundation/Foundation.h>


@interface TPSDuetPersonalizationProvider : NSObject



+(id)_personalizedStringsForType:(NSInteger)arg0 count:(NSUInteger)arg1 duetDataProvider:(id)arg2 error:(*id)arg3 ;
+(id)contactFromIntentForSiriTipSendMessage:(id)arg0 ;
+(id)contactFromIntentSiriTipStartCall:(id)arg0 ;
+(id)nameFromRecipients:(id)arg0 ;
+(id)personalizedStringsForType:(NSInteger)arg0 count:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)personalizedStringsForType:(NSInteger)arg0 error:(*id)arg1 ;


@end


#endif