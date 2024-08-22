// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFMEDIAMETADATA_H
#define SFMEDIAMETADATA_H

@class NSString, NSArray, NSDictionary, NSData;
@protocol SFMediaMetadata, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SFMediaMetadata : NSObject <SFMediaMetadata, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *albumName; // ivar: _albumName
@property (copy, nonatomic) NSString *artistName; // ivar: _artistName
@property (copy, nonatomic) NSArray *bundleIdentifiersToExclude; // ivar: _bundleIdentifiersToExclude
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSString *disambiguationTitle; // ivar: _disambiguationTitle
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *mediaName; // ivar: _mediaName
@property (copy, nonatomic) NSArray *mediaPunchouts; // ivar: _mediaPunchouts
@property (nonatomic) int mediaType; // ivar: _mediaType
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)hasMediaType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif