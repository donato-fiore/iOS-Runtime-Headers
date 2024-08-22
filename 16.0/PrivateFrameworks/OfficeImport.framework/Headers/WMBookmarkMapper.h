// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WMBOOKMARKMAPPER_H
#define WMBOOKMARKMAPPER_H

@class NSString;


#import "CMMapper.h"

@interface WMBookmarkMapper : CMMapper {
    NSString *mName;
    int mBookmarkType;
}




-(id)initWithWDBookmark:(id)arg0 parent:(id)arg1 ;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;


@end


#endif