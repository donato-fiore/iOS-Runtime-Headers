// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDCONTACTFAVORITESUTILITIES_H
#define _CDCONTACTFAVORITESUTILITIES_H

@class _PASLock;

#import <Foundation/Foundation.h>


@interface _CDContactFavoritesUtilities : NSObject

@property (retain, nonatomic) _PASLock *contactFavorites; // ivar: _contactFavorites


+(id)sharedInstance;
-(id)entriesForContact:(id)arg0 ;
-(id)favoriteContactEntries;
-(id)init;


@end


#endif