// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALDAVHTTPTRAFFICLOG_H
#define CALDAVHTTPTRAFFICLOG_H

@class DACoreDAVLogger;

#import <Foundation/Foundation.h>


@interface CalDAVHTTPTrafficLog : NSObject

@property (retain, nonatomic) DACoreDAVLogger *curLogger; // ivar: _curLogger


+(id)instance;
-(BOOL)enabled;
-(id)init;
-(void)finishSnippets;
-(void)logData:(id)arg0 ;
-(void)logString:(id)arg0 ;
-(void)logStringWithFormat:(id)arg0 ;


@end


#endif