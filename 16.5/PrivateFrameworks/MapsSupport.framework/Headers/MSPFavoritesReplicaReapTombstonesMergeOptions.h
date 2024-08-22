// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPFAVORITESREPLICAREAPTOMBSTONESMERGEOPTIONS_H
#define MSPFAVORITESREPLICAREAPTOMBSTONESMERGEOPTIONS_H

@class NSString;
@protocol MSPFavoritesReplicaMergeOptions;


#import "MSPReplicaMergeOptionsReapTombstones.h"

@interface MSPFavoritesReplicaReapTombstonesMergeOptions : MSPReplicaMergeOptionsReapTombstones <MSPFavoritesReplicaMergeOptions>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isDeserializationAllowed) BOOL deserializationAllowed; // ivar: _deserializationAllowed
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDeserializationAllowed:(BOOL)arg0 ;


@end


#endif