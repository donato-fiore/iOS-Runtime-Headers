// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMCACTIVATIONUTILITIES_H
#define DMCACTIVATIONUTILITIES_H

@class NSDictionary, NSMutableDictionary, NSNumber;

#import <Foundation/Foundation.h>


@interface DMCActivationUtilities : NSObject

@property (retain, nonatomic) NSDictionary *activationRecordCache; // ivar: _activationRecordCache
@property (retain, nonatomic) NSMutableDictionary *didBecomeReadyCallbacks; // ivar: _didBecomeReadyCallbacks
@property (retain, nonatomic) NSNumber *hrnModeCache; // ivar: _hrnModeCache
@property (nonatomic) BOOL isActivatedCache; // ivar: _isActivatedCache
@property (nonatomic) BOOL isReady; // ivar: _isReady


+(id)sharedInstance;
-(id)activationRecord;
-(id)initPrivate;
-(int)activationState;
-(int)hrnMode;
-(void)_clearCache;
-(void)addDidBecomeReadyKey:(id)arg0 callback:(id)arg1 ;


@end


#endif