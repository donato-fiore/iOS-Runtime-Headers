// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHIMPORTDUPLICATEINFO_H
#define PHIMPORTDUPLICATEINFO_H

@class NSDate, NSString, NSNumber, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PHImportDuplicateInfo : NSObject

@property (retain, nonatomic) NSDate *alternateImportImageDate;
@property (readonly, nonatomic) NSString *avchdFingerprint;
@property (readonly, nonatomic) NSString *fileName;
@property (readonly, nonatomic) NSNumber *fileSize;
@property (readonly, nonatomic) NSString *fingerprint;
@property (readonly, nonatomic) BOOL hasVideoComplement;
@property (readonly, nonatomic) NSDate *imageDate;
@property (retain, nonatomic) NSMutableDictionary *info; // ivar: _info
@property (readonly, nonatomic) BOOL isInTrash;
@property (readonly, nonatomic) CGFloat timezoneOffset;
@property (readonly, nonatomic) NSString *uuid;


-(BOOL)isLegacy;
-(id)description;
-(id)objectID;
-(id)originatingAssetIdentifier;


@end


#endif