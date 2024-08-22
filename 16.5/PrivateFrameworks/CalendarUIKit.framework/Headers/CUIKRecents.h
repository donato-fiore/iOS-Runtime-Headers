// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIKRECENTS_H
#define CUIKRECENTS_H


#import <Foundation/Foundation.h>


@interface CUIKRecents : NSObject



+(BOOL)recentDirectoryLocation:(id)arg0 matchesSource:(id)arg1 ;
+(BOOL)recentIsDirectoryLocation:(id)arg0 ;
+(BOOL)recentMissingStyleAttributes:(id)arg0 ;
+(id)_archivedInstance:(id)arg0 ;
+(id)directoryLocationForRecent:(id)arg0 onSource:(id)arg1 ;
+(id)locationForRecent:(id)arg0 ;
+(id)logHandle;
+(id)mapKitHandleForRecent:(id)arg0 ;
+(id)mapKitStyleAttributesForRecent:(id)arg0 ;
+(id)recentEventWithRecentContact:(id)arg0 styleAttributes:(id)arg1 ;
+(id)recentForDirectoryLocation:(id)arg0 onSource:(id)arg1 ;
+(id)recentForLocation:(id)arg0 withAddressString:(id)arg1 andTitle:(id)arg2 mapItem:(id)arg3 ;


@end


#endif