// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTRACKEDPARAGRAPHTREENODE_H
#define ICTRACKEDPARAGRAPHTREENODE_H

@class NSMutableArray, NSString, ICTrackedParagraph;

#import <Foundation/Foundation.h>

#import "ICTrackedParagraphTreeNode.h"

@interface ICTrackedParagraphTreeNode : NSObject

@property (nonatomic) BOOL checked; // ivar: _checked
@property (retain, nonatomic) NSMutableArray *children; // ivar: _children
@property (nonatomic) NSInteger indent; // ivar: _indent
@property (weak, nonatomic) ICTrackedParagraphTreeNode *parent; // ivar: _parent
@property (readonly, nonatomic) NSString *recurisiveDescription;
@property (retain, nonatomic) NSString *string; // ivar: _string
@property (retain, nonatomic) ICTrackedParagraph *trackedParagraph; // ivar: _trackedParagraph


+(id)nodeFromTrackedParagraph:(id)arg0 textView:(id)arg1 ;
+(id)placeholderNodeWithIndentation:(NSUInteger)arg0 ;
-(id)description;
-(id)linerizedRepresentation;
-(void)addChild:(id)arg0 ;
-(void)recursivlyAddDescriptionToString:(id)arg0 ;
-(void)recursivlyAddTrackedParagraphsToArray:(id)arg0 ;
-(void)recursivlySortCheckedItemsToBottom;


@end


#endif