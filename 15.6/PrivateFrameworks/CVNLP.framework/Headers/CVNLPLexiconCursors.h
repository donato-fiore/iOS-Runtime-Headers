// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CVNLPLEXICONCURSORS_H
#define CVNLPLEXICONCURSORS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CVNLPLexiconCursors : NSObject <NSCopying>

 {
    vector<const _LXCursor *, std::allocator<const _LXCursor *>> _sortedCursors;
}




-(NSInteger)count;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSortedCursors:(*void)arg0 ;
-(void)dealloc;
-(void)enumerateLexiconCursorsSortedByPriorityWithBlock:(id)arg0 ;


@end


#endif