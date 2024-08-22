// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFAUDIOSESSIONCOORDINATIONSNAPSHOT_H
#define AFAUDIOSESSIONCOORDINATIONSNAPSHOT_H

@class NSDateInterval, NSString, NSArray;
@protocol NSCopying, NSSecureCoding, AFDictionaryConvertible;

#import <Foundation/Foundation.h>

#import "AFAudioSessionCoordinationDeviceInfo.h"

@interface AFAudioSessionCoordinationSnapshot : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>



@property (readonly, copy, nonatomic) NSDateInterval *currentOrUpNextDateInterval; // ivar: _currentOrUpNextDateInterval
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAudioSessionActive; // ivar: _isAudioSessionActive
@property (readonly, copy, nonatomic) NSArray *localActiveAssertionContexts; // ivar: _localActiveAssertionContexts
@property (readonly, copy, nonatomic) AFAudioSessionCoordinationDeviceInfo *localDevice; // ivar: _localDevice
@property (readonly, copy, nonatomic) NSArray *localPendingAssertionContexts; // ivar: _localPendingAssertionContexts
@property (readonly, copy, nonatomic) NSArray *remoteActiveAssertionContexts; // ivar: _remoteActiveAssertionContexts
@property (readonly, copy, nonatomic) NSArray *remoteDisqualifiedDevices; // ivar: _remoteDisqualifiedDevices
@property (readonly, copy, nonatomic) NSArray *remotePendingAssertionContexts; // ivar: _remotePendingAssertionContexts
@property (readonly, copy, nonatomic) NSArray *remoteQualifiedInRangeDevices; // ivar: _remoteQualifiedInRangeDevices
@property (readonly, copy, nonatomic) NSArray *remoteQualifiedOutOfRangeDevices; // ivar: _remoteQualifiedOutOfRangeDevices
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCurrentOrUpNextDateInterval:(id)arg0 isAudioSessionActive:(BOOL)arg1 localActiveAssertionContexts:(id)arg2 localPendingAssertionContexts:(id)arg3 remoteActiveAssertionContexts:(id)arg4 remotePendingAssertionContexts:(id)arg5 localDevice:(id)arg6 remoteQualifiedInRangeDevices:(id)arg7 remoteQualifiedOutOfRangeDevices:(id)arg8 remoteDisqualifiedDevices:(id)arg9 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif