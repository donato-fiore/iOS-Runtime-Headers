// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCASSETCONTENTARCHIVE_H
#define FCASSETCONTENTARCHIVE_H

@class NTPBAsset, NSURL, NSString;


#import "FCContentArchive.h"

@interface FCAssetContentArchive : FCContentArchive {
    NTPBAsset *_asset;
    NSURL *_remoteURL;
    NSString *_filePath;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)manifest;
-(id)unarchiveIntoContentContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif