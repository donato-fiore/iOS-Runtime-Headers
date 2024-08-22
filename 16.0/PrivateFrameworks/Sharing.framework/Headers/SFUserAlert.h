// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFUSERALERT_H
#define SFUSERALERT_H

@class NSXPCConnection, NSDictionary, NSString, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFUserAlert : NSObject {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    *__CFUserNotification _cfNotif;
    NSXPCConnection *_xpcCnx;
    *__CFRunLoopSource _runLoopSrc;
}


@property (retain, nonatomic) NSDictionary *additionalInfo; // ivar: _additionalInfo
@property (retain, nonatomic) NSString *alternateButtonTitle; // ivar: _alternateButtonTitle
@property (nonatomic) BOOL asBanner; // ivar: _asBanner
@property (retain, nonatomic) NSString *defaultButtonTitle; // ivar: _defaultButtonTitle
@property (copy, nonatomic) id *dictionaryResponseHandler; // ivar: _dictionaryResponseHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (nonatomic) BOOL hasDefaultButton; // ivar: _hasDefaultButton
@property (retain, nonatomic) NSURL *iconURL; // ivar: _iconURL
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) NSString *otherButtonTitle; // ivar: _otherButtonTitle
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler
@property (retain, nonatomic) NSURL *soundURL; // ivar: _soundURL
@property (nonatomic) BOOL textInput; // ivar: _textInput
@property (retain, nonatomic) NSString *textInputTitle; // ivar: _textInputTitle
@property (copy, nonatomic) id *textResponseHandler; // ivar: _textResponseHandler
@property (nonatomic) CGFloat timeout; // ivar: _timeout
@property (retain, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)_defaultDictionary;
-(id)_mergedDict;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(struct __CFUserNotification *)createNotification;
-(void)_ensureXPCStarted;
-(void)_handleResponseForNotification:(struct __CFUserNotification *)arg0 flags:(NSUInteger)arg1 ;
-(void)_interrupted;
-(void)_invalidate;
-(void)_invalidated;
-(void)_postNotification:(struct __CFUserNotification *)arg0 ;
-(void)_present;
-(void)_presentBanner;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)present;
-(void)updateNotification;
-(void)userNotificationDictionaryResponse:(id)arg0 ;
-(void)userNotificationError:(id)arg0 ;
-(void)userNotificationResponse:(int)arg0 ;
-(void)userNotificationTextResponse:(id)arg0 ;


@end


#endif