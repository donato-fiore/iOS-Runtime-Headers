// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFOPENFILEPROVIDERITEMCOMMAND_H
#define SFOPENFILEPROVIDERITEMCOMMAND_H

@class NSString, NSDictionary, NSData;
@protocol SFOpenFileProviderItemCommand, NSSecureCoding, NSCopying;


#import "SFCommand.h"

@interface SFOpenFileProviderItemCommand : SFCommand <SFOpenFileProviderItemCommand, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *commandDetail;
@property (copy, nonatomic) NSString *coreSpotlightIdentifier; // ivar: _coreSpotlightIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSString *fileProviderIdentifier; // ivar: _fileProviderIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif