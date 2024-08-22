// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVSTYLESHEETREGISTRY_H
#define TVSTYLESHEETREGISTRY_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface TVStyleSheetRegistry : NSObject

@property (retain, nonatomic) NSMutableDictionary *nodesByTemplateName; // ivar: _nodesByTemplateName
@property (retain, nonatomic) NSMutableArray *rootNodes; // ivar: _rootNodes


+(id)_urlForStyleSheetName:(id)arg0 ;
-(id)init;
-(void)_commitTemplateTreeNode:(id)arg0 withParentStyleSheetURLs:(id)arg1 ;
-(void)_createDefaultRootNodes;
-(void)commitStyleSheets;
-(void)registerStyleSheetURLs:(id)arg0 forTemplateName:(id)arg1 basedOnTemplateName:(id)arg2 ;


@end


#endif