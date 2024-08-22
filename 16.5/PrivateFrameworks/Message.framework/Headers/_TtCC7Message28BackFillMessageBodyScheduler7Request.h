// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCC7MESSAGE28BACKFILLMESSAGEBODYSCHEDULER7REQUEST_H
#define _TTCC7MESSAGE28BACKFILLMESSAGEBODYSCHEDULER7REQUEST_H

@protocol MFBackFillingMessageBodyDownloadRequest;

#import <Foundation/Foundation.h>


@interface _TtCC7Message28BackFillMessageBodyScheduler7Request : NSObject <MFBackFillingMessageBodyDownloadRequest>

 {
    ? activity;
}




-(id)init;
-(void)completeWithStatus:(int)arg0 ;
-(void)dealloc;


@end


#endif