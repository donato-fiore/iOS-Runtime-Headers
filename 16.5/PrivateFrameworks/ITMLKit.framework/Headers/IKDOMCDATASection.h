// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKDOMCDATASECTION_H
#define IKDOMCDATASECTION_H

@protocol IKDOMCDATASection;


#import "IKDOMText.h"

@interface IKDOMCDATASection : IKDOMText <IKDOMCDATASection>





-(NSInteger)nodeType;
-(id)nodeName;


@end


#endif