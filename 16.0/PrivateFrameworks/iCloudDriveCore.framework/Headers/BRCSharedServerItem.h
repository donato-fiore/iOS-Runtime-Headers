// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCSHAREDSERVERITEM_H
#define BRCSHAREDSERVERITEM_H



#import "BRCServerItem.h"

@interface BRCSharedServerItem : BRCServerItem



-(BOOL)isSharedToMeChildItem;
-(BOOL)isSharedToMeTopLevelItem;
-(id)aliasDerivedStructure;
-(id)asSharedItem;
-(id)fallbackParentAppLibraryOnFS;
-(id)fallbackParentItemIDOnFS;
-(id)fallbackParentItemOnFS;
-(id)fallbackParentServerItemOnFS;
-(id)parentItemIDOnFS;
-(id)parentItemIDOnFSInDB:(id)arg0 ;
-(id)parentItemOnFS;
-(id)parentLocalItemOnFS;
-(id)parentZoneOnFS;
-(id)st;


@end


#endif