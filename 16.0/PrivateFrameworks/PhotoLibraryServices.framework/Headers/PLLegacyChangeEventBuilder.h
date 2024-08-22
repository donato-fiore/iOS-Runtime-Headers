// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLLEGACYCHANGEEVENTBUILDER_H
#define PLLEGACYCHANGEEVENTBUILDER_H


#import <Foundation/Foundation.h>


@interface PLLegacyChangeEventBuilder : NSObject



+(id)createXPCDictionaryFromChangedObjectIDs:(id)arg0 redundantDeletes:(id)arg1 uuidsForCloudDeletion:(id)arg2 updatedAttributesByObjectID:(id)arg3 updatedRelationshipsByObjectID:(id)arg4 updatedOrderKeys:(id)arg5 changeSource:(int)arg6 syncChangeMarker:(BOOL)arg7 ;


@end


#endif