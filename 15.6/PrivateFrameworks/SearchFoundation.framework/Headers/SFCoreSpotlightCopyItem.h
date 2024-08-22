// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFCORESPOTLIGHTCOPYITEM_H
#define SFCORESPOTLIGHTCOPYITEM_H

@class NSString, NSArray, NSDictionary, NSData;
@protocol SFCoreSpotlightCopyItem, NSSecureCoding, NSCopying;


#import "SFCopyItem.h"

@interface SFCoreSpotlightCopyItem : SFCopyItem <SFCoreSpotlightCopyItem, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (copy, nonatomic) NSString *coreSpotlightIdentifier; // ivar: _coreSpotlightIdentifier
@property (copy, nonatomic) NSArray *dataProviderTypeIdentifiers; // ivar: _dataProviderTypeIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSArray *fileProviderTypeIdentifiers; // ivar: _fileProviderTypeIdentifiers
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