// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REHTMLPARENTELEMENT_H
#define REHTMLPARENTELEMENT_H

@class NSArray;


#import "REHTMLElement.h"

@interface REHTMLParentElement : REHTMLElement {
    REHTMLElement *_parent;
    NSArray *_children;
}




-(id)_encodedData;
-(id)addChildren:(id)arg0 ;
-(id)attributes;
-(id)classes;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)elementBySettingAtttibutes:(id)arg0 ;
-(id)elementBySettingClasses:(id)arg0 ;
-(id)initWithParents:(id)arg0 children:(id)arg1 ;


@end


#endif