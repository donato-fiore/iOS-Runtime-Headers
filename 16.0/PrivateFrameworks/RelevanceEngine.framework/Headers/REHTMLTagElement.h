// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REHTMLTAGELEMENT_H
#define REHTMLTAGELEMENT_H

@class NSString, NSArray, NSDictionary;


#import "REHTMLElement.h"

@interface REHTMLTagElement : REHTMLElement {
    NSString *_tag;
    NSString *_content;
    NSArray *_classes;
    NSDictionary *_attributes;
    NSString *_prefix;
    NSString *_suffix;
}




-(id)_contentString;
-(id)_prefixContentString;
-(id)_suffixContentString;
-(id)attributes;
-(id)classes;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)elementByAddingClass:(id)arg0 ;
-(id)elementByAddingClasses:(id)arg0 ;
-(id)elementBySettingAtttibutes:(id)arg0 ;
-(id)elementBySettingClasses:(id)arg0 ;
-(id)initWithTag:(id)arg0 content:(id)arg1 ;


@end


#endif