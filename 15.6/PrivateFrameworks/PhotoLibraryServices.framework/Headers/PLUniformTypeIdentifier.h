// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLUNIFORMTYPEIDENTIFIER_H
#define PLUNIFORMTYPEIDENTIFIER_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PLUniformTypeIdentifier : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *compactRepresentation;
@property (readonly, nonatomic) short conformanceHint; // ivar: _conformanceHint
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) unsigned int wellKnownFileType; // ivar: _wellKnownFileType


+(BOOL)isPlayableVideoTypeIdentifierString:(id)arg0 ;
+(id)jpegUniformTypeIdentifier;
+(id)plistUniformTypeIdentifier;
+(id)quicktimeUniformTypeIdentifier;
+(id)utiWithCompactRepresentation:(id)arg0 conformanceHint:(short)arg1 ;
+(id)utiWithIdentifier:(id)arg0 ;
+(id)videoComplementUniformTypeIdentifier;
-(BOOL)conformsToAudio;
-(BOOL)conformsToData;
-(BOOL)conformsToImage;
-(BOOL)conformsToJPEG;
-(BOOL)conformsToMovie;
-(BOOL)conformsToRawImage;
-(BOOL)isDynamic;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToUniformTypeIdentifier:(id)arg0 ;
-(BOOL)isLosslessEncoding;
-(BOOL)isPlayableVideo;
-(BOOL)isPrimaryImageFormat;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithIdentifier:(id)arg0 compactRepresentation:(id)arg1 conformanceHint:(short)arg2 ;
-(id)preferredExtension;


@end


#endif