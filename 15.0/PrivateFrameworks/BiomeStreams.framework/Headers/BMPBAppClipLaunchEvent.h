// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMPBAPPCLIPLAUNCHEVENT_H
#define BMPBAPPCLIPLAUNCHEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface BMPBAppClipLaunchEvent : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *appBundleID; // ivar: _appBundleID
@property (retain, nonatomic) NSString *clipBundleID; // ivar: _clipBundleID
@property (retain, nonatomic) NSString *fullURL; // ivar: _fullURL
@property (readonly, nonatomic) BOOL hasAppBundleID;
@property (readonly, nonatomic) BOOL hasClipBundleID;
@property (readonly, nonatomic) BOOL hasFullURL;
@property (readonly, nonatomic) BOOL hasLaunchReason;
@property (readonly, nonatomic) BOOL hasReferrerBundleID;
@property (readonly, nonatomic) BOOL hasReferrerURL;
@property (readonly, nonatomic) BOOL hasURLHash;
@property (readonly, nonatomic) BOOL hasWebAppBundleID;
@property (retain, nonatomic) NSString *launchReason; // ivar: _launchReason
@property (retain, nonatomic) NSString *referrerBundleID; // ivar: _referrerBundleID
@property (retain, nonatomic) NSString *referrerURL; // ivar: _referrerURL
@property (retain, nonatomic) NSString *uRLHash; // ivar: _uRLHash
@property (retain, nonatomic) NSString *webAppBundleID; // ivar: _webAppBundleID


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