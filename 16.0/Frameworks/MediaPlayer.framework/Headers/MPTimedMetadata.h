// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPTIMEDMETADATA_H
#define MPTIMEDMETADATA_H

@class AVMetadataItem, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface MPTimedMetadata : NSObject {
    AVMetadataItem *_metadataItem;
}


@property (readonly, nonatomic) NSDictionary *allMetadata;
@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSString *keyspace;
@property (readonly, nonatomic) CGFloat timestamp;
@property (readonly, nonatomic) id *value;


-(id)_initWithMetadataItem:(id)arg0 ;
-(id)init;


@end


#endif