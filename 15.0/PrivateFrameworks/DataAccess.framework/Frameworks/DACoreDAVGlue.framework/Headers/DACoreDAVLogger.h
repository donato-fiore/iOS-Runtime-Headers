// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DACOREDAVLOGGER_H
#define DACOREDAVLOGGER_H

@class DATrafficLogger, NSString;
@protocol CoreDAVLogDelegate;



@interface DACoreDAVLogger : DATrafficLogger <CoreDAVLogDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)registerDefaultLoggerWithCoreDAV;
-(BOOL)shouldLogTransmittedData;
-(id)logHandle;
-(void)coreDAVLogTransmittedDataPartial:(id)arg0 ;
-(void)coreDAVTransmittedDataFinished;


@end


#endif