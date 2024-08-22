// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSFILERESULTBUILDER_H
#define SSFILERESULTBUILDER_H

@class NSString, NSDate, NSNumber;


#import "SSResultBuilder.h"

@interface SSFileResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *contentType; // ivar: _contentType
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (retain, nonatomic) NSString *fileProviderDomainId; // ivar: _fileProviderDomainId
@property (retain, nonatomic) NSString *fileProviderId; // ivar: _fileProviderId
@property (nonatomic) BOOL isFolder; // ivar: _isFolder
@property (retain, nonatomic) NSString *kind; // ivar: _kind
@property (retain, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSNumber *pageCount; // ivar: _pageCount
@property (retain, nonatomic) NSNumber *sizeInBytes; // ivar: _sizeInBytes
@property (retain, nonatomic) NSString *thumbnailURL; // ivar: _thumbnailURL


+(BOOL)isCoreSpotlightResult;
+(BOOL)supportsResult:(id)arg0 ;
+(id)bundleId;
+(id)stringWithModificationDate:(id)arg0 creationDate:(id)arg1 ;
+(id)stringWithPageCount:(id)arg0 ;
-(id)buildCommand;
-(id)buildCompactCardSection;
-(id)buildDescriptions;
-(id)buildInlineCardSection;
-(id)buildPunchoutCommandForFile;
-(id)buildPunchouts;
-(id)buildThumbnail;
-(id)initWithResult:(id)arg0 ;


@end


#endif