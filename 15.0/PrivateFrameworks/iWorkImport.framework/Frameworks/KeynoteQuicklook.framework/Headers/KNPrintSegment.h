// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KNPRINTSEGMENT_H
#define KNPRINTSEGMENT_H


#import <Foundation/Foundation.h>

#import "KNSlideNode.h"

@interface KNPrintSegment : NSObject

@property (readonly, nonatomic) NSUInteger buildIndex; // ivar: _buildIndex
@property (readonly, nonatomic) NSInteger commentsPageIndex; // ivar: _commentsPageIndex
@property (readonly, nonatomic) NSUInteger notesIndex; // ivar: _notesIndex
@property (readonly, nonatomic) KNSlideNode *slideNode; // ivar: _slideNode
@property (readonly, nonatomic) NSUInteger span; // ivar: _span


-(id)initWithSlideNode:(id)arg0 buildIndex:(NSUInteger)arg1 notesIndex:(NSUInteger)arg2 commentsPageIndex:(NSInteger)arg3 span:(NSUInteger)arg4 ;
-(id)initWithSlideNode:(id)arg0 buildIndex:(NSUInteger)arg1 notesIndex:(NSUInteger)arg2 span:(NSUInteger)arg3 ;


@end


#endif