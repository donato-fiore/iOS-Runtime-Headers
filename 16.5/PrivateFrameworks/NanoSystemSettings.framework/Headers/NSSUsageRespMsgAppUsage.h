// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSUSAGERESPMSGAPPUSAGE_H
#define NSSUSAGERESPMSGAPPUSAGE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NSSUsageRespMsgAppUsage : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (nonatomic) NSUInteger dynamicSizeInBytes; // ivar: _dynamicSizeInBytes
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSUInteger sharedSizeInBytes; // ivar: _sharedSizeInBytes
@property (nonatomic) NSUInteger staticSizeInBytes; // ivar: _staticSizeInBytes


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