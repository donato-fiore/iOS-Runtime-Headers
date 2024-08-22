// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFACCESSORYLISTUTILITIES_H
#define HFACCESSORYLISTUTILITIES_H


#import <Foundation/Foundation.h>


@interface HFAccessoryListUtilities : NSObject



+(id)accessoryRepresentableItemForAccessoryRepresentable:(id)arg0 valueSource:(id)arg1 ;
+(id)accessoryRepresentableObjectsFromAccessoryLikeObjects:(id)arg0 objectLevel:(NSUInteger)arg1 accessoryTypeGroups:(id)arg2 ;
+(id)createAccessoryCategorySectionsWithItems:(id)arg0 inHome:(id)arg1 sectionIdentifierBlock:(id)arg2 ;
+(id)createRoomSectionsWithItems:(id)arg0 inHome:(id)arg1 sectionIdentifierBlock:(id)arg2 ;
+(id)sortedAccessoryTypeGroups;
+(id)sortedRoomsForHome:(id)arg0 ;
-(id)init;


@end


#endif