// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIMEDIAITEMENTITYTYPESFETCHRESPONSECHANGES_H
#define VUIMEDIAITEMENTITYTYPESFETCHRESPONSECHANGES_H

@class VUICollectionChangeSet;

#import <Foundation/Foundation.h>


@interface VUIMediaItemEntityTypesFetchResponseChanges : NSObject

@property (readonly, nonatomic) BOOL localMediaItemsAvailableDidChange; // ivar: _localMediaItemsAvailableDidChange
@property (readonly, nonatomic) VUICollectionChangeSet *mediaItemEntityTypesChangeSet; // ivar: _mediaItemEntityTypesChangeSet


-(id)description;
-(id)init;
-(id)initWithMediaItemEntityTypesChangeSet:(id)arg0 localMediaItemsAvailableDidChange:(BOOL)arg1 ;


@end


#endif