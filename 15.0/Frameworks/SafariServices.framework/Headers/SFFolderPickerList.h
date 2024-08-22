// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFFOLDERPICKERLIST_H
#define SFFOLDERPICKERLIST_H

@class WebBookmarkCollection;

#import <Foundation/Foundation.h>


@interface SFFolderPickerList : NSObject {
    NSUInteger _style;
    WebBookmarkCollection *_bookmarkCollection;
}




-(id)folderListItemsIgnoringIdentifiers:(id)arg0 ;
-(id)initWithBookmarkCollection:(id)arg0 style:(NSUInteger)arg1 ;
-(void)_appendChildrenOfFolder:(id)arg0 toArray:(id)arg1 depth:(NSUInteger)arg2 ignoringIdentifiers:(id)arg3 ;
-(void)_appendFolderAndChildren:(id)arg0 toArray:(id)arg1 depth:(NSUInteger)arg2 ignoringIdentifiers:(id)arg3 ;


@end


#endif