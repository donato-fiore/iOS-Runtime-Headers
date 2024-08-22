// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBICONSTATEUNARCHIVERESULT_H
#define SBICONSTATEUNARCHIVERESULT_H

@class NSMutableArray, NSMutableSet, NSString, NSDictionary;
@protocol SBIconStateUnarchiveContext, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBRootFolder.h"

@interface SBIconStateUnarchiveResult : NSObject <SBIconStateUnarchiveContext, BSDescriptionProviding>

 {
    NSMutableArray *_folderStack;
    NSInteger _parseDepth;
    NSMutableSet *_nodeIdentifiersUnarchived;
    NSMutableSet *_widgetUniqueIdentifiersUnarchived;
    BOOL _corrupted;
    BOOL _dirty;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDirty) BOOL dirty;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic, setter=_setMetadata:) NSDictionary *metadata; // ivar: _metadata
@property (retain, nonatomic, setter=_setRootFolder:) SBRootFolder *rootFolder; // ivar: _rootFolder
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid;


-(BOOL)_isNodeIdentifierAlreadyUnarchived:(id)arg0 ;
-(BOOL)_isWidgetUniqueIdentifierAlreadyUnarchived:(id)arg0 ;
-(NSInteger)_currentParseDepth;
-(id)_currentFolder;
-(id)_popFolder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_noteEnteredNode;
-(void)_noteExitedNode;
-(void)_noteNodeIdentifierWasUnarchived:(id)arg0 ;
-(void)_noteRepresentationIsCorrupted;
-(void)_noteSignificantDeviation;
-(void)_noteWidgetUniqueIdentifierWasUnarchived:(id)arg0 ;
-(void)_pushFolder:(id)arg0 ;


@end


#endif