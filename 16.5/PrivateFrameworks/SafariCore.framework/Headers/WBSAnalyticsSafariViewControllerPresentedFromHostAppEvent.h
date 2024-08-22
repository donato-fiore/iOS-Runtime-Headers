// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSANALYTICSSAFARIVIEWCONTROLLERPRESENTEDFROMHOSTAPPEVENT_H
#define WBSANALYTICSSAFARIVIEWCONTROLLERPRESENTEDFROMHOSTAPPEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface WBSAnalyticsSafariViewControllerPresentedFromHostAppEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasHostAppBundleID;
@property (nonatomic) BOOL hasTimestamp;
@property (copy, nonatomic) NSString *hostAppBundleID; // ivar: _hostAppBundleID
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


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