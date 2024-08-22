// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOMIMPLEMENTATION_H
#define DOMIMPLEMENTATION_H



#import "DOMObject.h"

@interface DOMImplementation : DOMObject



-(BOOL)hasFeature:(id)arg0 ;
-(BOOL)hasFeature:(id)arg0 version:(id)arg1 ;
-(id)createCSSStyleSheet:(id)arg0 ;
-(id)createCSSStyleSheet:(id)arg0 media:(id)arg1 ;
-(id)createDocument:(id)arg0 ;
-(id)createDocument:(id)arg0 qualifiedName:(id)arg1 doctype:(id)arg2 ;
-(id)createDocumentType:(id)arg0 ;
-(id)createDocumentType:(id)arg0 publicId:(id)arg1 systemId:(id)arg2 ;
-(id)createHTMLDocument:(id)arg0 ;
-(void)dealloc;


@end


#endif