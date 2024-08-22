// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMXMLUTILS_H
#define CMXMLUTILS_H


#import <Foundation/Foundation.h>


@interface CMXmlUtils : NSObject



+(id)copyFilteredString:(id)arg0 ;
+(id)copyHeadElement;
+(id)copyHeadElementForDeviceWidth:(int)arg0 ;
+(id)copyHeadElementWithTitle:(id)arg0 ;
+(id)copyHeadElementWithTitle:(id)arg0 deviceWidth:(int)arg1 ;
+(id)copyXhtmlDocument;
+(id)xhtmlStringWithXmlData:(id)arg0 ;
+(void)filterString:(id)arg0 ;


@end


#endif