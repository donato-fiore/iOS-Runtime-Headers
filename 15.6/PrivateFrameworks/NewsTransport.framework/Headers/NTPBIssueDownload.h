// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBISSUEDOWNLOAD_H
#define NTPBISSUEDOWNLOAD_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "NTPBIssueData.h"

@interface NTPBIssueDownload : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int downloadLocation; // ivar: _downloadLocation
@property (nonatomic) int downloadState; // ivar: _downloadState
@property (nonatomic) int downloadType; // ivar: _downloadType
@property (nonatomic) BOOL hasDownloadLocation;
@property (nonatomic) BOOL hasDownloadState;
@property (nonatomic) BOOL hasDownloadType;
@property (readonly, nonatomic) BOOL hasIssueData;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NTPBIssueData *issueData; // ivar: _issueData
@property (retain, nonatomic) NSString *sourceChannelId; // ivar: _sourceChannelId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif