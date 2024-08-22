// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef XMLNODE_H
#define XMLNODE_H


#import <Foundation/Foundation.h>


@interface XMLNode : NSObject {
    ? _xmlNode;
}




+(?)getJavascriptFromNode;
+(?)stringValueForAttributeinNode;
-(?)initWithNode;
-(?)xmlNode;
-(NSInteger)_intValueFromAttribute:(id)arg0 ;
-(id)_stringValueFromAttribute:(id)arg0 ;
-(void)dealloc;
-(void)setXmlNode:(struct _xmlNode *)arg0 ;


@end


#endif