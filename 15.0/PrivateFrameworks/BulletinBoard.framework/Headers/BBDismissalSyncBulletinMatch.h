// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BBDISMISSALSYNCBULLETINMATCH_H
#define BBDISMISSALSYNCBULLETINMATCH_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BBDismissalItem.h"

@interface BBDismissalSyncBulletinMatch : NSObject

@property (copy, nonatomic) NSString *dismissalID; // ivar: _dismissalID
@property (retain, nonatomic) BBDismissalItem *dismissalItem; // ivar: _dismissalItem
@property (nonatomic) NSUInteger feeds; // ivar: _feeds
@property (copy, nonatomic) NSString *sectionID; // ivar: _sectionID


-(id)description;
-(id)initWithDismissalDictionaryItem:(id)arg0 ;
-(id)initWithDismissalID:(id)arg0 andItem:(id)arg1 ;


@end


#endif