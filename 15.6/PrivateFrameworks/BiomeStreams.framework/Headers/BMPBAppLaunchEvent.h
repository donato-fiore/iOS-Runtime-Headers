// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMPBAPPLAUNCHEVENT_H
#define BMPBAPPLAUNCHEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface BMPBAppLaunchEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) NSString *extensionHostID; // ivar: _extensionHostID
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) BOOL hasExtensionHostID;
@property (readonly, nonatomic) BOOL hasLaunchReason;
@property (nonatomic) BOOL hasLaunchType;
@property (readonly, nonatomic) BOOL hasParentBundleID;
@property (nonatomic) BOOL hasStarting;
@property (retain, nonatomic) NSString *launchReason; // ivar: _launchReason
@property (nonatomic) int launchType; // ivar: _launchType
@property (retain, nonatomic) NSString *parentBundleID; // ivar: _parentBundleID
@property (nonatomic) BOOL starting; // ivar: _starting


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)launchTypeAsString:(int)arg0 ;
-(int)StringAsLaunchType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif