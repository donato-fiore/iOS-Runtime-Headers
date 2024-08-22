// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFPLAYMEDIACOMMAND_H
#define SFPLAYMEDIACOMMAND_H

@class NSString, NSDictionary, NSData;
@protocol SFPlayMediaCommand, NSSecureCoding, NSCopying;


#import "SFCommand.h"
#import "SFMediaMetadata.h"

@interface SFPlayMediaCommand : SFCommand <SFPlayMediaCommand, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *commandDetail;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SFMediaMetadata *mediaMetadata; // ivar: _mediaMetadata
@property (nonatomic) int playbackLocation; // ivar: _playbackLocation
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)hasPlaybackLocation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif