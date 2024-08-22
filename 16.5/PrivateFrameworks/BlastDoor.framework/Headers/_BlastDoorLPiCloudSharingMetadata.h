// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BLASTDOORLPICLOUDSHARINGMETADATA_H
#define _BLASTDOORLPICLOUDSHARINGMETADATA_H

@class BlastDoorLPSpecializationMetadata, NSString, NSDictionary;


#import "_BlastDoorLPImage.h"

@interface _BlastDoorLPiCloudSharingMetadata : BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *application; // ivar: _application
@property (copy, nonatomic) NSString *applicationBundleIdenfier; // ivar: _applicationBundleIdenfier
@property (retain, nonatomic) NSDictionary *encodedTokens; // ivar: _encodedTokens
@property (retain, nonatomic) _BlastDoorLPImage *icon; // ivar: _icon
@property (copy, nonatomic) NSString *kind; // ivar: _kind
@property (retain, nonatomic) _BlastDoorLPImage *thumbnail; // ivar: _thumbnail
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)shareURLForHandle:(id)arg0 ;
-(id)tokenDataForHandle:(id)arg0 ;
-(void)_enumerateAsynchronousFields:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setTokenData:(id)arg0 handle:(id)arg1 url:(id)arg2 ;


@end


#endif