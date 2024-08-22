// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHCLUSTERSTATUS_H
#define SHCLUSTERSTATUS_H

@class NSDate, NSURL, NSString;

#import <Foundation/Foundation.h>

#import "SHClusterMetadata.h"

@interface SHClusterStatus : NSObject

@property (readonly, nonatomic) NSInteger clusterType;
@property (readonly, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSURL *dataURL; // ivar: _dataURL
@property (nonatomic) BOOL isDataValid; // ivar: _isDataValid
@property (nonatomic) NSInteger loadStatus; // ivar: _loadStatus
@property (retain, nonatomic) SHClusterMetadata *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) NSString *storefront;
@property (readonly, copy, nonatomic) NSString *uniqueHash;




@end


#endif