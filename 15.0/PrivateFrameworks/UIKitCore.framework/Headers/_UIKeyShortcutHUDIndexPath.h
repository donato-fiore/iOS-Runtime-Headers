// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIKEYSHORTCUTHUDINDEXPATH_H
#define _UIKEYSHORTCUTHUDINDEXPATH_H

@class NSIndexPath;
@protocol _UIKeyShortcutHUDCollectionViewManagerClient;

#import <Foundation/Foundation.h>


@interface _UIKeyShortcutHUDIndexPath : NSObject

@property (weak, nonatomic) NSObject<_UIKeyShortcutHUDCollectionViewManagerClient> *client; // ivar: _client
@property (retain, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath


+(id)hudIndexPathWithClient:(id)arg0 indexPath:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif