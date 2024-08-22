// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INCEXTENSIONREQUEST_H
#define INCEXTENSIONREQUEST_H

@class NSUUID, INWatchdogTimer, NSOperationQueue, NSError, NSExtension, NSArray, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface INCExtensionRequest : NSObject {
    NSUUID *_requestIdentifier;
    INWatchdogTimer *_contextTimer;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_requestOperationQueue;
}


@property (retain, nonatomic, setter=_setError:) NSError *_error; // ivar: _error
@property (retain, nonatomic, setter=_setExtension:) NSExtension *_extension; // ivar: _extension
@property (retain, nonatomic) NSArray *extensionInputItems; // ivar: _extensionInputItems
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL requiresTCC; // ivar: _requiresTCC


+(void)initialize;
-(id)_requestOperationQueue;
-(id)initWithIdentifier:(id)arg0 ;
-(void)_resetContextTimer;
-(void)_resetExtensionContextHostWithCompletion:(id)arg0 ;
-(void)_scheduleContextTimer;
-(void)reset;
-(void)startRequestForIntent:(id)arg0 completion:(id)arg1 ;


@end


#endif