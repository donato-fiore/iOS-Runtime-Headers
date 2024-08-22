// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLTIMEREFERENCE_H
#define PLTIMEREFERENCE_H

@class NSString;
@protocol PLTimeReferenceManager;

#import <Foundation/Foundation.h>


@interface PLTimeReference : NSObject

@property (retain) NSString *entryDefinitionKey; // ivar: _entryDefinitionKey
@property (nonatomic) CGFloat hourBucketOffset; // ivar: _hourBucketOffset
@property (nonatomic) CGFloat offset; // ivar: _offset
@property (retain) NSObject<PLTimeReferenceManager> *timeManager; // ivar: _timeManager
@property NSInteger timeReferenceType; // ivar: _timeReferenceType


+(id)defaultsKeyFromEntryDefinitionKey:(id)arg0 ;
+(id)hourBucketOffsetKeyFromEntryDefinitionKey:(id)arg0 ;
-(CGFloat)computeHourBucketOffset;
-(CGFloat)getHourBucketOffset;
-(id)addTimeOffsetToMonotonicTime:(id)arg0 ;
-(id)currentTime;
-(id)initWithTimeManager:(id)arg0 entryDefinitionKey:(id)arg1 timeReferenceType:(NSInteger)arg2 ;
-(id)removeTimeOffsetFromReferenceTime:(id)arg0 ;
-(void)initializeOffsetWithEntries:(id)arg0 ;
-(void)registerForDayChangedNotification;
-(void)registerForTimeZoneChangedNotification;
-(void)writeOffsetToDefaults;


@end


#endif