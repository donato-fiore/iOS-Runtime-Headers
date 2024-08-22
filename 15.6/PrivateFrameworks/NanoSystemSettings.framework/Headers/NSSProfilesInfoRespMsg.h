// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSPROFILESINFORESPMSG_H
#define NSSPROFILESINFORESPMSG_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "NSSProfilesInfoRespMsgProfileInfo.h"

@interface NSSProfilesInfoRespMsg : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *configProfiles; // ivar: _configProfiles
@property (readonly, nonatomic) BOOL hasMdmProfile;
@property (retain, nonatomic) NSSProfilesInfoRespMsgProfileInfo *mdmProfile; // ivar: _mdmProfile


+(Class)configProfileType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)configProfileAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addConfigProfile:(id)arg0 ;
-(void)clearConfigProfiles;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif