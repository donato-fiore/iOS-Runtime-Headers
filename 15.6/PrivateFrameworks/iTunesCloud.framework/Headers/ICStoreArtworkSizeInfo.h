// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSTOREARTWORKSIZEINFO_H
#define ICSTOREARTWORKSIZEINFO_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface ICStoreArtworkSizeInfo : NSObject

@property (nonatomic) BOOL hasMaxSupportedSize; // ivar: _hasMaxSupportedSize
@property (nonatomic) CGSize maxSupportedSize; // ivar: _maxSupportedSize
@property (copy, nonatomic) NSArray *supportedSizes; // ivar: _supportedSizes
@property (nonatomic) NSInteger type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif