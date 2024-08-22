// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSFILERESULTBUILDER_H
#define SSFILERESULTBUILDER_H

@class NSString, NSDate, NSNumber;


#import "SSResultBuilder.h"

@interface SSFileResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *contentType; // ivar: _contentType
@property (retain, nonatomic) NSString *coreSpotlightId; // ivar: _coreSpotlightId
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (retain, nonatomic) NSString *filePath; // ivar: _filePath
@property (retain, nonatomic) NSString *fileProviderDomainId; // ivar: _fileProviderDomainId
@property (retain, nonatomic) NSString *fileProviderId; // ivar: _fileProviderId
@property (nonatomic) BOOL isFolder; // ivar: _isFolder
@property (retain, nonatomic) NSString *kind; // ivar: _kind
@property (retain, nonatomic) NSDate *lastOpenDate; // ivar: _lastOpenDate
@property (retain, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSNumber *pageCount; // ivar: _pageCount
@property (retain, nonatomic) NSNumber *sizeInBytes; // ivar: _sizeInBytes
@property (retain, nonatomic) NSString *thumbnailURL; // ivar: _thumbnailURL


+(id)bundleId;
+(id)stringWithLastOpenDate:(id)arg0 modificationDate:(id)arg1 creationDate:(id)arg2 ;
+(id)stringWithPageCount:(id)arg0 ;
-(id)buildCommand;
-(id)buildCompactCardSection;
-(id)buildDescriptions;
-(id)buildInlineCardSection;
-(id)buildPunchouts;
-(id)buildThumbnail;
-(id)initWithResult:(id)arg0 ;


@end


#endif