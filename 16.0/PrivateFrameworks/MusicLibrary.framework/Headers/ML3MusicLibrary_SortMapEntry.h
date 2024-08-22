// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ML3MUSICLIBRARY_SORTMAPENTRY_H
#define ML3MUSICLIBRARY_SORTMAPENTRY_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface ML3MusicLibrary_SortMapEntry : NSObject {
    NSInteger _nameOrder;
    NSString *_name;
    NSData *_sortKey;
    int _nameSection;
    BOOL _dirty;
}




-(id)description;
-(id)initWithName:(id)arg0 nameSection:(int)arg1 sortKey:(id)arg2 ;
-(id)initWithName:(id)arg0 nameSection:(int)arg1 sortKey:(id)arg2 nameOrder:(NSInteger)arg3 dirtyFlag:(BOOL)arg4 ;


@end


#endif