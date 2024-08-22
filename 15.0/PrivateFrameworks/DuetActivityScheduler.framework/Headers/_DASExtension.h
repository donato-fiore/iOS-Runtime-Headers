// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DASEXTENSION_H
#define _DASEXTENSION_H

@class NSString, NSDate;
@protocol NSExtensionRequestHandling, OS_os_log, _DASExtensionRunner, OS_os_transaction;

#import <Foundation/Foundation.h>

#import "_DASActivity.h"
#import "_DASExtensionRemoteContext.h"

@interface _DASExtension : NSObject <NSExtensionRequestHandling>



@property (retain, nonatomic) _DASActivity *activity; // ivar: _activity
@property (retain, nonatomic) _DASExtensionRemoteContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (retain, nonatomic) NSObject<_DASExtensionRunner> *runner; // ivar: _runner
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction; // ivar: _transaction


-(id)init;
-(void)_activityCompletedWithStatus:(unsigned char)arg0 ;
-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)runner:(id)arg0 performActivity:(id)arg1 ;
-(void)suspend;


@end


#endif