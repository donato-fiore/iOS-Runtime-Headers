// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RUIXMLPARSERDELEGATE_H
#define RUIXMLPARSERDELEGATE_H

@protocol NSXMLParserDelegate;

#import <Foundation/Foundation.h>

#import "RUIXMLElement.h"

@interface RUIXMLParserDelegate : NSObject <NSXMLParserDelegate>

 {
    ? root;
    ? $__lazy_storage_$_xmlElement;
}


@property (nonatomic, retain) RUIXMLElement *xmlElement;


-(id)init;
-(void)parser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)parser:(id)arg0 foundCDATA:(id)arg1 ;
-(void)parser:(id)arg0 foundCharacters:(id)arg1 ;


@end


#endif