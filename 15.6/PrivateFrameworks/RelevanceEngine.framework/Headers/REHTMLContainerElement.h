// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REHTMLCONTAINERELEMENT_H
#define REHTMLCONTAINERELEMENT_H

@class NSArray;


#import "REHTMLElement.h"

@interface REHTMLContainerElement : REHTMLElement {
    NSArray *_elements;
}




-(id)_encodedData;
-(id)append:(id)arg0 ;
-(id)attributes;
-(id)classes;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)elementBySettingAtttibutes:(id)arg0 ;
-(id)elementBySettingClasses:(id)arg0 ;
-(id)initWithElements:(id)arg0 ;


@end


#endif