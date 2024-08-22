// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSARCHIVEDASSET_H
#define CLSARCHIVEDASSET_H

@class NSString;
@protocol CLSRelationable;


#import "CLSAbstractAsset.h"

@interface CLSArchivedAsset : CLSAbstractAsset <CLSRelationable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)relations;


@end


#endif