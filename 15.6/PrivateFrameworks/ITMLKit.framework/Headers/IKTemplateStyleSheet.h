// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKTEMPLATESTYLESHEET_H
#define IKTEMPLATESTYLESHEET_H

@class NSMutableDictionary, NSString, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "IKStyleFactory.h"

@interface IKTemplateStyleSheet : NSObject <NSCopying>



@property (readonly, retain, nonatomic) NSMutableDictionary *styleComposersByKeypath; // ivar: _styleComposersByKeypath
@property (readonly, retain, nonatomic) IKStyleFactory *styleFactory; // ivar: _styleFactory
@property (readonly, copy, nonatomic) NSString *templateName; // ivar: _templateName
@property (readonly, copy, nonatomic) NSDictionary *templateTree; // ivar: _templateTree


+(?)_coalesceNode:(?)arg0 overridingNodeforcedTemplateName;
+(?)_coalesceTrees:(?)arg0 overridingTreeforcedTemplateName;
+(?)_findNodesInXmlTree:(?)arg0 styleNodetemplateNode;
+(?)_resolveEmbeddedTemplatesInXmlTree;
+(?)_templateNodeWithXMLNodeparentNode;
+(?)_templateTreeWithXMLTreeparentNode;
+(?)_xmlTreeForTemplateName;
+(?)_xmlTreeWithDataerror;
+(id)_styleSheetForTemplateName:(id)arg0 ;
+(id)styleSheetForTemplateName:(id)arg0 ;
+(void)loadStyleSheets;
+(void)registerStyleSheetURL:(id)arg0 forTemplateName:(id)arg1 ;
+(void)registerStyleSheetURL:(id)arg0 parentStyleSheets:(id)arg1 forTemplateName:(id)arg2 ;
-(?)_initWithXMLDoc:(?)arg0 templateNameerror;
-(id)_styleComposerForNode:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)styleComposerForElement:(id)arg0 ;
-(void)setViewElementStylesDirty;


@end


#endif