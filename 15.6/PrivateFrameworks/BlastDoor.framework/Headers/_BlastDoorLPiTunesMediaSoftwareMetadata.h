// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _BLASTDOORLPITUNESMEDIASOFTWAREMETADATA_H
#define _BLASTDOORLPITUNESMEDIASOFTWAREMETADATA_H

@class BlastDoorLPSpecializationMetadata, NSString, NSArray;


#import "_BlastDoorLPImage.h"
#import "_BlastDoorLPVideo.h"

@interface _BlastDoorLPiTunesMediaSoftwareMetadata : BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *genre; // ivar: _genre
@property (retain, nonatomic) _BlastDoorLPImage *icon; // ivar: _icon
@property (nonatomic) BOOL isMessagesOnlyApp; // ivar: _isMessagesOnlyApp
@property (retain, nonatomic) _BlastDoorLPImage *messagesAppIcon; // ivar: _messagesAppIcon
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *platform; // ivar: _platform
@property (retain, nonatomic) _BlastDoorLPVideo *previewVideo; // ivar: _previewVideo
@property (copy, nonatomic) NSArray *screenshots; // ivar: _screenshots
@property (copy, nonatomic) NSString *storeFrontIdentifier; // ivar: _storeFrontIdentifier
@property (copy, nonatomic) NSString *storeIdentifier; // ivar: _storeIdentifier
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle


+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_enumerateAsynchronousFields:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif