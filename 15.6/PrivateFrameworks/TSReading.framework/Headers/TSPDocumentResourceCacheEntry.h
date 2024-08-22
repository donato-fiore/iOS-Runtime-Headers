// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPDOCUMENTRESOURCECACHEENTRY_H
#define TSPDOCUMENTRESOURCECACHEENTRY_H

@class NSURL, NSDate, NSString;

#import <Foundation/Foundation.h>


@interface TSPDocumentResourceCacheEntry : NSObject

@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (nonatomic) NSInteger accessCount; // ivar: _accessCount
@property (retain, nonatomic) NSDate *contentAccessDate; // ivar: _contentAccessDate
@property (readonly, nonatomic) NSString *digestString; // ivar: _digestString
@property (nonatomic) NSInteger fileSize; // ivar: _fileSize
@property (nonatomic) BOOL wasDownloaded; // ivar: _wasDownloaded


-(id)init;
-(id)initWithDigestString:(id)arg0 ;


@end


#endif