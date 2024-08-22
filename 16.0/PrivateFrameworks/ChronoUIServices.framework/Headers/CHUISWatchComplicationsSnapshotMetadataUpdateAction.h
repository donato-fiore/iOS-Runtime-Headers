// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHUISWATCHCOMPLICATIONSSNAPSHOTMETADATAUPDATEACTION_H
#define CHUISWATCHCOMPLICATIONSSNAPSHOTMETADATAUPDATEACTION_H

@class BSAction, NSArray;


#import "CHUISWatchComplicationsWidgetSnapshotMetadata.h"

@interface CHUISWatchComplicationsSnapshotMetadataUpdateAction : BSAction {
    NSArray *_urls;
}


@property (readonly, retain, nonatomic) CHUISWatchComplicationsWidgetSnapshotMetadata *metadata;


-(id)initWithMetadata:(id)arg0 completion:(id)arg1 ;
-(id)initWithMetadata:(id)arg0 directory:(id)arg1 completion:(id)arg2 ;


@end


#endif