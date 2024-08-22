// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCSESSIONCONFIGURATION_H
#define VCSESSIONCONFIGURATION_H

@class NSUUID, NSDate, NSString;
@protocol OS_nw_activity, NSCopying;

#import <Foundation/Foundation.h>


@interface VCSessionConfiguration : NSObject

@property (copy, nonatomic) NSUUID *conversationID; // ivar: _conversationID
@property (copy, nonatomic) NSDate *conversationTimeBase; // ivar: _conversationTimeBase
@property (copy, nonatomic) NSDate *conversationTimeBaseTruncated; // ivar: _conversationTimeBaseTruncated
@property (nonatomic) BOOL isGKVoiceChat; // ivar: _isGKVoiceChat
@property (nonatomic, getter=isOneToOneModeEnabled) BOOL oneToOneModeEnabled; // ivar: _oneToOneModeEnabled
@property (nonatomic, setter=setParentNWActivity:) NSObject<OS_nw_activity> *parentNWActivity; // ivar: _parentNWActivity
@property (retain, nonatomic) NSObject<NSCopying> *reportingHierarchyToken; // ivar: _reportingHierarchyToken
@property (copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (nonatomic) NSInteger sessionMode; // ivar: _sessionMode


-(BOOL)applyConfigurationUsingClientDict:(id)arg0 ;
-(BOOL)updateWithClientDictionary:(id)arg0 ;
-(id)init;
-(id)initWithClientDictionary:(id)arg0 ;
-(void)cleanupNwActivity;
-(void)dealloc;


@end


#endif