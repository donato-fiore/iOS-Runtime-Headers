// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFOPENMEDIACOMMAND_H
#define SFOPENMEDIACOMMAND_H

@class NSString, NSDictionary, NSData;
@protocol SFOpenMediaCommand, NSSecureCoding, NSCopying;


#import "SFCommand.h"
#import "SFMediaMetadata.h"

@interface SFOpenMediaCommand : SFCommand <SFOpenMediaCommand, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *clientSelectedBundleIdentifier; // ivar: _clientSelectedBundleIdentifier
@property (copy, nonatomic) NSString *commandDetail;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SFMediaMetadata *mediaMetadata; // ivar: _mediaMetadata
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif