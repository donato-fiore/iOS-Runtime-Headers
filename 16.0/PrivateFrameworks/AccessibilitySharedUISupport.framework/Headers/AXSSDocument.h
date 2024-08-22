// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSSDOCUMENT_H
#define AXSSDOCUMENT_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface AXSSDocument : NSObject

@property (retain, nonatomic) NSMutableArray *_nodes; // ivar: __nodes
@property (readonly, copy, nonatomic) NSArray *nodes;


+(id)documentWithAttributedText:(id)arg0 ;
+(id)documentWithText:(id)arg0 ;
-(id)_generateAllDocIssues;
-(id)_generateAllWordIssues;
-(id)generateAllIssues;
-(id)init;
-(id)stringByAcceptingFirstSuggestionForIssues:(id)arg0 ;
-(void)addNode:(id)arg0 ;


@end


#endif