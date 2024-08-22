// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCSESSIONCONFIGURATION_H
#define AVCSESSIONCONFIGURATION_H

@class NSUUID, NSDate;
@protocol OS_nw_activity, NSCopying;

#import <Foundation/Foundation.h>


@interface AVCSessionConfiguration : NSObject {
    NSInteger _sessionMode;
}


@property (copy, nonatomic) NSUUID *conversationID; // ivar: _conversationID
@property (copy, nonatomic) NSDate *conversationTimeBase; // ivar: _conversationTimeBase
@property (copy, nonatomic) NSDate *conversationTimeBaseTruncated; // ivar: _conversationTimeBaseTruncated
@property (nonatomic, getter=isOneToOneModeEnabled) BOOL oneToOneModeEnabled; // ivar: _oneToOneModeEnabled
@property (nonatomic, setter=setParentNWActivity:) NSObject<OS_nw_activity> *parentNWActivity; // ivar: _parentNWActivity
@property (copy, nonatomic) NSObject<NSCopying> *reportingHierarchyToken; // ivar: _reportingHierarchyToken
@property (nonatomic) NSInteger sessionMode;


+(NSInteger)clientSessionModeWithSessionMode:(NSInteger)arg0 ;
+(NSInteger)sessionModeWithClientSessionMode:(NSInteger)arg0 ;
-(id)deserializeNwActivity:(id)arg0 ;
-(id)dictionary;
-(id)serializeNwActivity:(id)arg0 ;
-(void)cleanupNwActivity;
-(void)dealloc;
-(void)setUpWithDictionary:(id)arg0 ;


@end


#endif