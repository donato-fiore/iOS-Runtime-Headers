// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKSEARCHINDEX_H
#define FBKSEARCHINDEX_H

@class NSManagedObjectContext;

#import <Foundation/Foundation.h>


@interface FBKSearchIndex : NSObject {
    int _isSearching;
}


@property (retain) NSManagedObjectContext *managedObjectContext; // ivar: _managedObjectContext


-(id)initWithManagedObjectContext:(id)arg0 ;
-(void)asynchronouslySearchWithQuery:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif