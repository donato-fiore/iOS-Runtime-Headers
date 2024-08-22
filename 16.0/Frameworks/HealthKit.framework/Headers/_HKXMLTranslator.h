// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKXMLTRANSLATOR_H
#define _HKXMLTRANSLATOR_H


#import <Foundation/Foundation.h>


@interface _HKXMLTranslator : NSObject {
    *_xsltStylesheet _stylesheet;
}




-(id)_localizeXSL:(id)arg0 localizationTableName:(id)arg1 localizationOverride:(id)arg2 ;
-(id)convertToHTMLFromXML:(id)arg0 ;
-(id)initWithXSL:(id)arg0 localizationTableName:(id)arg1 localizationOverride:(id)arg2 ;
-(void)dealloc;


@end


#endif