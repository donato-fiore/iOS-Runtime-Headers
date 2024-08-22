// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOMTEXT_H
#define DOMTEXT_H

@class NSString;


#import "DOMCharacterData.h"

@interface DOMText : DOMCharacterData

@property (readonly, copy) NSString *wholeText;


-(id)replaceWholeText:(id)arg0 ;
-(id)splitText:(unsigned int)arg0 ;


@end


#endif