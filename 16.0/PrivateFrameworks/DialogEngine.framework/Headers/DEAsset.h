// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEASSET_H
#define DEASSET_H

@class NSData;

#import <Foundation/Foundation.h>


@interface DEAsset : NSObject

@property NSUInteger downloadType; // ivar: _downloadType
@property (nonatomic) NSUInteger encryptedSize; // ivar: _encryptedSize
@property (retain, nonatomic) NSData *encryptedVersion; // ivar: _encryptedVersion
@property (retain, nonatomic) NSData *version; // ivar: _version


+(NSUInteger)downloadTypeFromPb:(int)arg0 ;
+(id)assetFromPb:(*void)arg0 ;
+(int)downloadTypeToPb:(NSUInteger)arg0 ;
+(void)assetToPb:(id)arg0 asset:(id)arg1 assetPb:(*void)arg2 ;


@end


#endif