// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROBEATMETADATA_H
#define MIROBEATMETADATA_H


#import <Foundation/Foundation.h>

#import "FMTimedMetadataItem.h"

@interface MiroBeatMetadata : NSObject

@property (retain, nonatomic) FMTimedMetadataItem *metadataItem; // ivar: _metadataItem
@property (nonatomic) NSInteger priority; // ivar: _priority


+(id)beatWithMetadataItem:(id)arg0 andPriority:(NSInteger)arg1 ;
-(id)description;
-(id)initWithMetadataItem:(id)arg0 andPriority:(NSInteger)arg1 ;


@end


#endif