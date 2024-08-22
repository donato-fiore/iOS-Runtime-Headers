// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMACTIVITY_H
#define EMACTIVITY_H

@class NSString, NSError, NSDate, NSProgress, NSDictionary;
@protocol EFLoggable, NSSecureCoding, EFCancelable;

#import <Foundation/Foundation.h>

#import "EMStatusUpdateProvider.h"
#import "EMActivityObjectID.h"

@interface EMActivity : NSObject <EFLoggable, NSSecureCoding>

 {
    os_unfair_lock_s _lock;
    EMStatusUpdateProvider *_statusUpdateProvider;
    id<EFCancelable> *_progressKVOCancellation;
}


@property (readonly) NSInteger activityType; // ivar: _activityType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSError *error; // ivar: _error
@property (readonly) NSDate *finished; // ivar: _finished
@property (nonatomic) CGFloat fractionCompleted; // ivar: _fractionCompleted
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *localizedDescription;
@property (readonly) BOOL needsPersistentHistory;
@property (readonly) EMActivityObjectID *objectID; // ivar: _objectID
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly) NSDate *started; // ivar: _started
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingLocalizedDescription;
+(id)log;
-(BOOL)isEqualToActivityWithType:(NSInteger)arg0 userInfo:(id)arg1 ;
-(id)_localizedDescriptionForFetchState:(NSInteger)arg0 ;
-(id)initWithActivityType:(NSInteger)arg0 userInfo:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_observeProgress;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finishWithError:(id)arg0 ;
-(void)setCompletedCount:(NSInteger)arg0 totalCount:(NSInteger)arg1 ;


@end


#endif