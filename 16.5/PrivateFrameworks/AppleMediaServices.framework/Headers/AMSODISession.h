// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSODISESSION_H
#define AMSODISESSION_H

@class NSString, NSLock;
@protocol AMSBagProtocol;

#import <Foundation/Foundation.h>


@interface AMSODISession : NSObject {
    NSString *_cacheIdentifier;
}


@property (readonly, nonatomic) NSUInteger accountType; // ivar: _accountType
@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSString *cacheIdentifier;
@property (retain, nonatomic) NSLock *lock; // ivar: _lock
@property (readonly, copy, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier


+(BOOL)provideFeedbackOnPayloadOutcome:(NSUInteger)arg0 cacheIdentifier:(id)arg1 bag:(id)arg2 ;
+(BOOL)shouldUseODIWithBag:(id)arg0 ;
-(BOOL)updateWithAttributes:(id)arg0 ;
-(id)_createODISession;
-(id)getAssessment;
-(id)initWithSessionIdentifier:(id)arg0 accountType:(NSUInteger)arg1 bag:(id)arg2 ;
-(id)initWithSessionIdentifier:(id)arg0 accountType:(NSUInteger)arg1 bundleIdentifier:(id)arg2 bag:(id)arg3 ;


@end


#endif