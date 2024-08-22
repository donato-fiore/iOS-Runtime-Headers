// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLTPBSETNOTIFICATIONSALERTLEVELREQUEST_H
#define BLTPBSETNOTIFICATIONSALERTLEVELREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;



@interface BLTPBSetNotificationsAlertLevelRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasLevel;
@property (nonatomic) BOOL hasMirror;
@property (readonly, nonatomic) BOOL hasSectionID;
@property (nonatomic) int level; // ivar: _level
@property (nonatomic) BOOL mirror; // ivar: _mirror
@property (retain, nonatomic) NSString *sectionID; // ivar: _sectionID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)levelAsString:(int)arg0 ;
-(int)StringAsLevel:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif