// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHCLUSTERMETADATA_H
#define SHCLUSTERMETADATA_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface SHClusterMetadata : NSObject

@property (readonly, nonatomic) NSInteger clusterType; // ivar: _clusterType
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy, nonatomic) NSString *storefront; // ivar: _storefront
@property (readonly, copy, nonatomic) NSString *uniqueHash; // ivar: _uniqueHash


-(id)initWithType:(NSInteger)arg0 storefront:(id)arg1 uniqueHash:(id)arg2 creationDate:(id)arg3 ;


@end


#endif