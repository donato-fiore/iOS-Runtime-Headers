// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCACTIVATIONUTILITIES_H
#define MCACTIVATIONUTILITIES_H

@class NSDictionary, NSMutableDictionary, NSNumber;

#import <Foundation/Foundation.h>


@interface MCActivationUtilities : NSObject

@property (retain, nonatomic) NSDictionary *activationRecordCache; // ivar: _activationRecordCache
@property (retain, nonatomic) NSMutableDictionary *didBecomeReadyCallbacks; // ivar: _didBecomeReadyCallbacks
@property (nonatomic) BOOL isActivatedCache; // ivar: _isActivatedCache
@property (retain, nonatomic) NSNumber *isHRNModeCache; // ivar: _isHRNModeCache
@property (nonatomic) BOOL isReady; // ivar: _isReady


+(id)sharedInstance;
-(id)activationRecord;
-(id)init;
-(id)initPrivate;
-(int)isActivated;
-(int)isHRNMode;
-(void)_clearCache;
-(void)addDidBecomeReadyKey:(id)arg0 callback:(id)arg1 ;


@end


#endif