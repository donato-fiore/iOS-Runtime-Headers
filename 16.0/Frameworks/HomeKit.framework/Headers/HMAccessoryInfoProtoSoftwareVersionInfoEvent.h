// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMACCESSORYINFOPROTOSOFTWAREVERSIONINFOEVENT_H
#define HMACCESSORYINFOPROTOSOFTWAREVERSIONINFOEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HMAccessoryInfoProtoSoftwareVersionInfoEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (readonly, nonatomic) BOOL hasBuildVersion;
@property (nonatomic) BOOL hasMajorVersion;
@property (nonatomic) BOOL hasMinorVersion;
@property (nonatomic) BOOL hasUpdateVersion;
@property (nonatomic) NSInteger majorVersion; // ivar: _majorVersion
@property (nonatomic) NSInteger minorVersion; // ivar: _minorVersion
@property (nonatomic) NSInteger updateVersion; // ivar: _updateVersion


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif