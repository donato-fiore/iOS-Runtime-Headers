// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATAUDIOTAPDESCRIPTION_H
#define ATAUDIOTAPDESCRIPTION_H

@class NSUUID, NSArray, AVAudioFormat, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATAudioTapDescription : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, nonatomic) unsigned int audioSessionID; // ivar: _audioSessionID
@property (copy, nonatomic) NSArray *excludedPIDs; // ivar: _excludedPIDs
@property (readonly, nonatomic) AVAudioFormat *format; // ivar: _format
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic, getter=isPreSpatial) BOOL preSpatial; // ivar: _preSpatial
@property (nonatomic) int processIdentifier;
@property (copy, nonatomic) NSArray *processIdentifiers; // ivar: _processIdentifiers
@property (readonly, nonatomic) NSString *sceneIdentifier; // ivar: _sceneIdentifier
@property (readonly, nonatomic) unsigned int sessionType; // ivar: _sessionType
@property (readonly, nonatomic) NSInteger tapType; // ivar: _tapType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initBaseTapInternalWithFormat:(id)arg0 ;
-(id)initPreSpatialAudioSessionTapWithFormat:(id)arg0 sessionID:(unsigned int)arg1 ;
-(id)initPreSpatialProcessTapWithFormat:(id)arg0 PID:(int)arg1 ;
-(id)initPreSpatialProcessTapWithFormat:(id)arg0 PIDs:(id)arg1 ;
-(id)initPreSpatialSceneIdentifierTapWithFormat:(id)arg0 sceneIdentifier:(id)arg1 ;
-(id)initPreSpatialSessionTypeTapWithFormat:(id)arg0 sessionType:(unsigned int)arg1 ;
-(id)initPreSpatialTapInternalWithFormat:(id)arg0 PIDs:(id)arg1 sessionID:(unsigned int)arg2 sessionType:(unsigned int)arg3 sceneID:(id)arg4 ;
-(id)initProcessTapWithFormat:(id)arg0 PID:(int)arg1 ;
-(id)initProcessTapWithFormat:(id)arg0 PIDs:(id)arg1 ;
-(id)initScreenSharingTapWithFormat:(id)arg0 ;
-(id)initSystemTapWithFormat:(id)arg0 ;
-(id)initSystemTapWithFormat:(id)arg0 excludePIDs:(id)arg1 ;
-(id)initTapInternalWithFormat:(id)arg0 PIDs:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif