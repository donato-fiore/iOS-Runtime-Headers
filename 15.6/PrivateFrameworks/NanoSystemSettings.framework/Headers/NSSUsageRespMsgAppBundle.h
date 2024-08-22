// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSUSAGERESPMSGAPPBUNDLE_H
#define NSSUSAGERESPMSGAPPBUNDLE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "NSSUsageSize.h"

@interface NSSUsageRespMsgAppBundle : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (readonly, nonatomic) BOOL hasBundleIdentifier;
@property (readonly, nonatomic) BOOL hasBundleVersion;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasSize;
@property (nonatomic) BOOL hasSupportsManualPurge;
@property (readonly, nonatomic) BOOL hasVendor;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSSUsageSize *size; // ivar: _size
@property (nonatomic) BOOL supportsManualPurge; // ivar: _supportsManualPurge
@property (retain, nonatomic) NSString *vendor; // ivar: _vendor


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