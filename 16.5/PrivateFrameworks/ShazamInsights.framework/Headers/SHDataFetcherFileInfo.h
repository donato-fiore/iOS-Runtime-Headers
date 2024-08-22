// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHDATAFETCHERFILEINFO_H
#define SHDATAFETCHERFILEINFO_H

@class NSDate, NSData, NSURL, NSString;

#import <Foundation/Foundation.h>


@interface SHDataFetcherFileInfo : NSObject

@property (readonly, nonatomic) int compressionType;
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSURL *dataFilePathURL; // ivar: _dataFilePathURL
@property (copy, nonatomic) NSString *mimeType; // ivar: _mimeType
@property (copy, nonatomic) NSString *storefront; // ivar: _storefront
@property (readonly, copy, nonatomic) NSString *suggestedExtension;
@property (readonly, copy, nonatomic) NSString *suggestedFileName; // ivar: _suggestedFileName
@property (copy, nonatomic) NSString *uniqueHash; // ivar: _uniqueHash


+(id)dataFetcherForSourceURL:(id)arg0 ;
-(id)initWithData:(id)arg0 suggestedFileName:(id)arg1 ;
-(id)initWithDataURL:(id)arg0 ;
-(id)initWithDataURL:(id)arg0 suggestedFileName:(id)arg1 ;


@end


#endif