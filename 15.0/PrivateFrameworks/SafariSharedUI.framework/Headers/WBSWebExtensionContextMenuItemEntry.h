// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSWEBEXTENSIONCONTEXTMENUITEMENTRY_H
#define WBSWEBEXTENSIONCONTEXTMENUITEMENTRY_H

@class NSMutableOrderedSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "WBSWebExtensionContextMenuItemInfo.h"
#import "WBSWebExtensionContextMenuItemEntry.h"

@interface WBSWebExtensionContextMenuItemEntry : NSObject

@property (readonly, nonatomic) NSMutableOrderedSet *children; // ivar: _children
@property (readonly, nonatomic) NSObject<NSCopying> *identifier; // ivar: _identifier
@property (retain, nonatomic) WBSWebExtensionContextMenuItemInfo *info; // ivar: _info
@property (weak, nonatomic) WBSWebExtensionContextMenuItemEntry *parentEntry; // ivar: _parentEntry


-(id)description;
-(id)initWithIdentifier:(id)arg0 ;
-(void)performWithSelfAndChildren:(id)arg0 ;


@end


#endif