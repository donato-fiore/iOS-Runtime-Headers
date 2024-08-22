// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLBOOKITEM_H
#define BLBOOKITEM_H

@class NSString, NSDictionary, NSURL, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BLBookItem : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *album; // ivar: _album
@property (copy, nonatomic) NSString *author; // ivar: _author
@property (copy, nonatomic) NSString *coverImagePath; // ivar: _coverImagePath
@property (retain, nonatomic) NSDictionary *entry; // ivar: _entry
@property (copy, nonatomic) NSString *feedURL; // ivar: _feedURL
@property (retain, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (copy, nonatomic) NSString *folderName; // ivar: _folderName
@property (nonatomic) BOOL iTunesU; // ivar: _iTunesU
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *itunesuAssetID; // ivar: _itunesuAssetID
@property (retain, nonatomic) NSDate *lastUserAccessDate; // ivar: _lastUserAccessDate
@property (copy, nonatomic) NSString *legacyUniqueIdentifier; // ivar: _legacyUniqueIdentifier
@property (readonly, copy, nonatomic) NSString *mimeType;
@property (readonly, nonatomic) NSString *path;
@property (retain, nonatomic) NSURL *permlink; // ivar: _permlink
@property (copy, nonatomic) NSString *persistentIdentifier; // ivar: _persistentIdentifier
@property (copy, nonatomic) NSString *publicationVersion; // ivar: _publicationVersion
@property (copy, nonatomic) NSString *publisherIdentifier; // ivar: _publisherIdentifier
@property (nonatomic) NSInteger purgePriority; // ivar: _purgePriority
@property (nonatomic, getter=isSample) BOOL sample; // ivar: _sample
@property (copy, nonatomic) NSString *storeIdentifier; // ivar: _storeIdentifier
@property (copy, nonatomic) NSString *temporaryIdentifier; // ivar: _temporaryIdentifier
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)_cloudCoverImageData;
-(id)_cloudDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEduCloudData:(id)arg0 path:(id)arg1 ;
-(id)initWithEntry:(id)arg0 basePath:(id)arg1 ;
-(id)initWithPeristentIdentifier:(id)arg0 permlink:(id)arg1 title:(id)arg2 ;
-(void)_setCloudCoverImageData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif