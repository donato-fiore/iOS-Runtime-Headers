// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSDOWNLOADMANAGEROPTIONS_H
#define SSDOWNLOADMANAGEROPTIONS_H

@class NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SSDownloadManagerOptions : NSObject <NSCopying>



@property (copy, nonatomic) NSArray *downloadKinds; // ivar: _downloadKinds
@property (nonatomic) BOOL ignoreDivertedDownloads; // ivar: _ignoreDivertedDownloads
@property (copy, nonatomic) NSString *persistenceIdentifier; // ivar: _persistenceIdentifier
@property (copy, nonatomic) NSArray *prefetchedDownloadExternalProperties; // ivar: _prefetchedDownloadExternalProperties
@property (copy, nonatomic) NSArray *prefetchedDownloadProperties; // ivar: _prefetchedDownloadProperties
@property (nonatomic) BOOL shouldFilterExternalOriginatedDownloads; // ivar: _filterExternalOriginatedDownloads


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif