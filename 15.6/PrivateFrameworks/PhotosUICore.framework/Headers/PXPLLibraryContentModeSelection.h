// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPLLIBRARYCONTENTMODESELECTION_H
#define PXPLLIBRARYCONTENTMODESELECTION_H


#import <Foundation/Foundation.h>


@interface PXPLLibraryContentModeSelection : NSObject



+(BOOL)hasPersistedLibraryContentModeSelection;
+(int)contentModeForNavigationDestination:(id)arg0 ;
+(int)getPersistedLibraryContentModeSelection;
+(int)launchContentModeForNavigationDestination:(id)arg0 ;
+(void)setPersistedLibraryContentModeSelection:(int)arg0 ;


@end


#endif