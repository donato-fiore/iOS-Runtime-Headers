// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef USWEBPAGEUSAGE_H
#define USWEBPAGEUSAGE_H

@class NSMutableDictionary, NSURL, NSString;
@protocol _CDAsyncLocalContext, _DKKnowledgeSaving;

#import <Foundation/Foundation.h>


@interface USWebpageUsage : NSObject {
    NSMutableDictionary *_contextUsageRecord;
}


@property (readonly, copy) NSURL *URL; // ivar: _URL
@property (readonly, copy) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly) NSObject<_CDAsyncLocalContext> *context; // ivar: _context
@property (readonly) NSObject<_DKKnowledgeSaving> *eventStorage; // ivar: _eventStorage
@property (readonly) BOOL usageTrusted; // ivar: _usageTrusted


+(id)getProcessIdentifier;
-(id)description;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 bundleIdentifier:(id)arg1 ;
-(id)initWithURL:(id)arg0 bundleIdentifier:(id)arg1 auditToken:(struct ? )arg2 ;
-(id)initWithURL:(id)arg0 context:(id)arg1 eventStorage:(id)arg2 bundleIdentifier:(id)arg3 usageTrusted:(BOOL)arg4 ;
-(void)changeState:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;


@end


#endif