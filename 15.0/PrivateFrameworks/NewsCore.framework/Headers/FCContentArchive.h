// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCCONTENTARCHIVE_H
#define FCCONTENTARCHIVE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "FCContentManifest.h"

@interface FCContentArchive : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) FCContentManifest *manifest;


+(BOOL)supportsSecureCoding;
+(id)archiveWithAVAsset:(id)arg0 ;
+(id)archiveWithAVAssetKey:(id)arg0 ;
+(id)archiveWithAsset:(id)arg0 remoteURL:(id)arg1 filePath:(id)arg2 ;
+(id)archiveWithAssetWrappingKey:(id)arg0 wrappingKeyID:(id)arg1 ;
+(id)archiveWithChildArchives:(id)arg0 ;
+(id)archiveWithPersistedArchivePath:(id)arg0 ;
+(id)archiveWithRecord:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)unarchiveIntoContentContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif