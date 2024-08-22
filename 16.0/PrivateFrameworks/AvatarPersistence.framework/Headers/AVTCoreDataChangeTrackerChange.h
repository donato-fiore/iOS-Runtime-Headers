// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTCOREDATACHANGETRACKERCHANGE_H
#define AVTCOREDATACHANGETRACKERCHANGE_H

@class NSString;
@protocol AVTAvatarRecordChange;

#import <Foundation/Foundation.h>


@interface AVTCoreDataChangeTrackerChange : NSObject <AVTAvatarRecordChange>



@property (readonly, nonatomic) NSInteger changeType; // ivar: _changeType
@property (readonly, nonatomic) NSString *recordIdentifier; // ivar: _recordIdentifier


+(NSInteger)trackerChangeTypeFromPersistentChangeType:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithRecordIdentifier:(id)arg0 changeType:(NSInteger)arg1 ;


@end


#endif