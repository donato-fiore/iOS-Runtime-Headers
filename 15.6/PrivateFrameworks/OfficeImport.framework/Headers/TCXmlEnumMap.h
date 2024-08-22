// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TCXMLENUMMAP_H
#define TCXMLENUMMAP_H


#import <Foundation/Foundation.h>


@interface TCXmlEnumMap : NSObject {
    *__CFDictionary mNameToValueMap;
}




-(?)readFromNode:(?)arg0 ns:(?)arg1 namedef;
-(?)readFromNode:(?)arg0 ns:(?)arg1 namevalue;
-(?)readFromNode:(?)arg0 nsname;
-(id)initWithDescriptions:(struct TCXmlEnumDescription *)arg0 ;
-(void)dealloc;


@end


#endif