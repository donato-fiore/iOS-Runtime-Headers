// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRPLAYER_H
#define MRPLAYER_H

@class NSURL, NSData, NSString, NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MRPlayer.h"

@interface MRPlayer : NSObject <NSCopying>



@property (copy, nonatomic) NSURL *appIcon; // ivar: _appIcon
@property (nonatomic) unsigned int audioSessionID; // ivar: _audioSessionID
@property (nonatomic) NSInteger audioSessionType; // ivar: _audioSessionType
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic, getter=isDefaultPlayer) BOOL defaultPlayer;
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) BOOL hasAuxiliaryProperties;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSSet *mxSessionIDs; // ivar: _mxSessionIDs
@property (readonly, nonatomic) MRPlayer *skeleton;


+(id)anyPlayer;
+(id)defaultPlayer;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithData:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayName:(id)arg1 ;
-(void)mergeFrom:(id)arg0 ;


@end


#endif