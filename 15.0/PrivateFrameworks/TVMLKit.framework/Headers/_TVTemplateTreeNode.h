// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVTEMPLATETREENODE_H
#define _TVTEMPLATETREENODE_H

@class NSMutableArray, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface _TVTemplateTreeNode : NSObject {
    NSMutableArray *_derivedTemplateNodes;
}


@property (readonly, copy, nonatomic) NSArray *derivedTemplateNodes;
@property (copy, nonatomic) NSArray *finalURLs; // ivar: _finalURLs
@property (readonly, nonatomic) BOOL isAbstract; // ivar: _isAbstract
@property (readonly, copy, nonatomic) NSArray *styleSheetURLs; // ivar: _styleSheetURLs
@property (readonly, copy, nonatomic) NSString *templateName; // ivar: _templateName


-(id)initWithTemplateName:(id)arg0 styleSheetURLs:(id)arg1 ;
-(id)initWithTemplateName:(id)arg0 styleSheetURLs:(id)arg1 abstract:(BOOL)arg2 ;
-(void)addDerivedTemplateNode:(id)arg0 ;


@end


#endif