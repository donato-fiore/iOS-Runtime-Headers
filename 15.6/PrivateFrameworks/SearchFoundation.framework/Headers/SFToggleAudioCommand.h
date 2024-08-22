// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFTOGGLEAUDIOCOMMAND_H
#define SFTOGGLEAUDIOCOMMAND_H

@class NSString, NSDictionary, NSData;
@protocol SFToggleAudioCommand, NSSecureCoding, NSCopying;


#import "SFCommand.h"

@interface SFToggleAudioCommand : SFCommand <SFToggleAudioCommand, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *commandDetail;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *localMediaIdentifier; // ivar: _localMediaIdentifier
@property (nonatomic) int mediaEntityType; // ivar: _mediaEntityType
@property (copy, nonatomic) NSString *persistentIdentifier; // ivar: _persistentIdentifier
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *universalLibraryIdentifier; // ivar: _universalLibraryIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)hasMediaEntityType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif