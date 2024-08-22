// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLLOGGINGCONTEXT_H
#define FLLOGGINGCONTEXT_H

@class NSString, NSFileManager, NSUserDefaults;
@protocol FLLoggingContext, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FLLoggingContext : NSObject <FLLoggingContext>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSFileManager *fileManager; // ivar: _fileManager
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger now;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *timestampReferenceIdentifier; // ivar: _timestampReferenceIdentifier
@property (readonly, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults


-(id)init;
-(id)initWithFileManager:(id)arg0 ;
-(void)reportTelemetry:(id)arg0 payload:(id)arg1 ;


@end


#endif