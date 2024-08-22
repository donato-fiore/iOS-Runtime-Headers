// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ATXICONLOCATION_H
#define _ATXICONLOCATION_H

@class NSIndexPath;

#import <Foundation/Foundation.h>


@interface _ATXIconLocation : NSObject

@property (readonly, nonatomic) BOOL appearOnlyInAppLibrary; // ivar: _appearOnlyInAppLibrary
@property (readonly, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath
@property (readonly, nonatomic) BOOL isInstalled; // ivar: _isInstalled
@property (readonly, nonatomic) BOOL isOnDock; // ivar: _isOnDock


-(id)initWithIndexPath:(id)arg0 isOnDock:(BOOL)arg1 existsInAppLibraryOnly:(BOOL)arg2 isInstalled:(BOOL)arg3 ;


@end


#endif