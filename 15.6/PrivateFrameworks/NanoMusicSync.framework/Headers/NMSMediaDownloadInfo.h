// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMSMEDIADOWNLOADINFO_H
#define NMSMEDIADOWNLOADINFO_H

@class NSOrderedSet;

#import <Foundation/Foundation.h>


@interface NMSMediaDownloadInfo : NSObject

@property (readonly, nonatomic) NSOrderedSet *items; // ivar: _items


-(id)description;
-(id)externalLibraryItemIdentifiers;
-(id)initWithItems:(id)arg0 ;
-(id)mediaLibraryItemIdentifiers;
-(void)enumerateMediaItemsUsingBlock:(id)arg0 ;


@end


#endif