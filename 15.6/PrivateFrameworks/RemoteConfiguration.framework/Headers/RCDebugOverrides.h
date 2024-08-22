// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RCDEBUGOVERRIDES_H
#define RCDEBUGOVERRIDES_H

@class NSArray, NSString;
@protocol RCSerializable;

#import <Foundation/Foundation.h>


@interface RCDebugOverrides : NSObject <RCSerializable>



@property (readonly, copy, nonatomic) NSArray *additionalSegmentSetIDs; // ivar: _additionalSegmentSetIDs
@property (readonly, nonatomic) NSUInteger configurationSource; // ivar: _configurationSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUInteger debugEnvironment; // ivar: _debugEnvironment
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disableAbTesting; // ivar: _disableAbTesting
@property (readonly, nonatomic) BOOL enableExtraLogs; // ivar: _enableExtraLogs
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL ignoreCache; // ivar: _ignoreCache
@property (readonly, nonatomic) BOOL onlyUseFallbackURL;
@property (readonly, copy, nonatomic) NSArray *overrideSegmentSetIDs; // ivar: _overrideSegmentSetIDs
@property (readonly) Class superclass;


+(id)defaultDebugOverrides;
-(BOOL)isEqual:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDisableAbTesting:(BOOL)arg0 overrideSegmentSetIDs:(id)arg1 additionalSegmentSetIDs:(id)arg2 configurationSource:(NSUInteger)arg3 debugEnvironment:(NSUInteger)arg4 ignoreCache:(BOOL)arg5 ;
-(id)initWithDisableAbTesting:(BOOL)arg0 overrideSegmentSetIDs:(id)arg1 additionalSegmentSetIDs:(id)arg2 configurationSource:(NSUInteger)arg3 debugEnvironment:(NSUInteger)arg4 ignoreCache:(BOOL)arg5 enableExtraLogs:(BOOL)arg6 ;
-(id)initWithDisableAbTesting:(BOOL)arg0 overrideSegmentSetIDs:(id)arg1 additionalSegmentSetIDs:(id)arg2 onlyUseFallbackURL:(BOOL)arg3 debugEnvironment:(NSUInteger)arg4 ;


@end


#endif