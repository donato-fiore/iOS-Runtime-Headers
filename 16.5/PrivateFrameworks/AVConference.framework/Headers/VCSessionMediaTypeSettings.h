// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCSESSIONMEDIATYPESETTINGS_H
#define VCSESSIONMEDIATYPESETTINGS_H

@class NSMutableSet, NSSet;
@protocol NSSecureCoding;


#import "VCObject.h"

@interface VCSessionMediaTypeSettings : VCObject <NSSecureCoding>

 {
    NSMutableSet *_streamGroupIDs;
}


@property (nonatomic) unsigned int mediaState; // ivar: _mediaState
@property (readonly, nonatomic) unsigned int mediaType; // ivar: _mediaType
@property (nonatomic) unsigned int remoteMediaState; // ivar: _remoteMediaState
@property (readonly, nonatomic) NSSet *streamGroupIDs;


+(BOOL)supportsSecureCoding;
+(id)serializationClasses;
+(id)settingsWithMediaType:(unsigned int)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMediaType:(unsigned int)arg0 ;
-(void)addStreamGroupID:(unsigned int)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif