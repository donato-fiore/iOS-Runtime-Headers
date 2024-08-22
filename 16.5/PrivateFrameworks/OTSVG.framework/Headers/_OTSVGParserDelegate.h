// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _OTSVGPARSERDELEGATE_H
#define _OTSVGPARSERDELEGATE_H

@class NSString;
@protocol NSXMLParserDelegate;

#import <Foundation/Foundation.h>


@interface _OTSVGParserDelegate : NSObject <NSXMLParserDelegate>

 {
    vector<std::reference_wrapper<SVG::Element>, std::allocator<std::reference_wrapper<SVG::Element>>> stack;
    unordered_map<std::string, std::stack<std::string>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::stack<std::string>>>> namespaces;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL errorOccurred; // ivar: errorOccurred
@property (readonly) NSUInteger hash;
@property ? namespaces;
@property *void root; // ivar: root
@property unsigned int skipDepth; // ivar: skipDepth
@property ? stack;
@property (readonly) Class superclass;
@property unsigned int unitsPerEm; // ivar: unitsPerEm


-(id)initWithUnitsPerEm:(unsigned int)arg0 ;
-(void)parser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 ;
-(void)parser:(id)arg0 didEndMappingPrefix:(id)arg1 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)parser:(id)arg0 didStartMappingPrefix:(id)arg1 toURI:(id)arg2 ;
-(void)parser:(id)arg0 parseErrorOccurred:(id)arg1 ;
-(void)parser:(id)arg0 validationErrorOccurred:(id)arg1 ;
-(void)parserDidEndDocument:(id)arg0 ;
-(void)parserDidStartDocument:(id)arg0 ;


@end


#endif