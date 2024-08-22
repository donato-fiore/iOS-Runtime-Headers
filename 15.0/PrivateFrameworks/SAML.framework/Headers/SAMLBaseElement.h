// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAMLBASEELEMENT_H
#define SAMLBASEELEMENT_H



#import "XMLWrapperElement.h"

@interface SAMLBaseElement : XMLWrapperElement



+(id)createElement:(*id)arg0 ;
-(id)initWithNode:(struct _xmlNode *)arg0 doc:(struct _xmlDoc *)arg1 query:(id)arg2 error:(*id)arg3 ;
-(void)setElementProperties;


@end


#endif