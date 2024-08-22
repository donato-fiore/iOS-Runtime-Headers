// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMCARRIERREPORTJUNKHELPER_H
#define IMCARRIERREPORTJUNKHELPER_H


#import <Foundation/Foundation.h>


@interface IMCarrierReportJunkHelper : NSObject



+(BOOL)canReportJunkOverCellularServiceOfMessageItem:(id)arg0 ;
+(BOOL)isReportJunkServiceAllowedForMessageItem:(id)arg0 junkChatStyle:(unsigned char)arg1 ;
+(BOOL)validateReportJunkCarrierAddress:(id)arg0 ;
+(id)cellularServiceStatusOfCallerID:(id)arg0 ;
+(id)createJunkReportMessageBodyTextForMessageItem:(id)arg0 junkChatStyle:(unsigned char)arg1 ;
+(id)createJunkReportMessageItemBodyForMessageItem:(id)arg0 junkChatStyle:(unsigned char)arg1 ;
+(id)fetchMMSReportJunkCarrierAddressForPhoneNumber:(id)arg0 simID:(id)arg1 ;
+(id)fetchSMSReportJunkCarrierAddressForPhoneNumber:(id)arg0 simID:(id)arg1 ;
+(id)jsonSerializeDictionary:(id)arg0 ;
+(id)junkReportMessageItemForMessageItem:(id)arg0 account:(id)arg1 junkChatStyle:(unsigned char)arg2 ;
+(id)messageItemReceiveDate:(id)arg0 ;
+(id)reportJunkCarrierAddressForMessageItem:(id)arg0 junkChatStyle:(unsigned char)arg1 ;
+(void)collectReportJunkMetricsForJunkMessageItem:(id)arg0 junkChatStyle:(unsigned char)arg1 totalMessagesInThread:(NSUInteger)arg2 ;
+(void)setHandleParametersOfMessageItem:(id)arg0 usingAccount:(id)arg1 usingMessageItem:(id)arg2 junkChatStyle:(unsigned char)arg3 ;
+(void)simIDPhoneNumberFromMessageDestinationCallerID:(id)arg0 simID:(*id)arg1 phoneNumber:(*id)arg2 ;


@end


#endif