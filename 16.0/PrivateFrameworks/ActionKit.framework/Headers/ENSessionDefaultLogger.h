// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENSESSIONDEFAULTLOGGER_H
#define ENSESSIONDEFAULTLOGGER_H

@class NSString;
@protocol ENSDKLogging;

#import <Foundation/Foundation.h>


@interface ENSessionDefaultLogger : NSObject <ENSDKLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)evernoteLogErrorString:(id)arg0 ;
-(void)evernoteLogInfoString:(id)arg0 ;


@end


#endif