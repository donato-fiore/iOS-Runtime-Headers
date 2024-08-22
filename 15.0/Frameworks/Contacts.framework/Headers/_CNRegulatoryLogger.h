// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNREGULATORYLOGGER_H
#define _CNREGULATORYLOGGER_H

@class PAAccessLogger, CNAuditToken, NSString;
@protocol CNRegulatoryLogger;

#import <Foundation/Foundation.h>


@interface _CNRegulatoryLogger : NSObject <CNRegulatoryLogger>



@property (retain, nonatomic) PAAccessLogger *accessLogger; // ivar: _accessLogger
@property (readonly, nonatomic) CNAuditToken *cnAuditToken; // ivar: _cnAuditToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) *ct_green_tea_logger_s greenTeaLogger; // ivar: _greenTeaLogger
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAuditToken:(id)arg0 ;
-(void)dealloc;
-(void)logContactPickerAccessEvent;
-(void)logContactsDataAccessEvent;
-(void)modifyingContactsData;
-(void)readAndTransmittingContactsData;
-(void)readingContactsData;


@end


#endif