// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MPUHTMLDEFAULTDELEGATE_H
#define _MPUHTMLDEFAULTDELEGATE_H

@class NSString, NSDictionary;
@protocol MPUHTMLParserDelegate;

#import <Foundation/Foundation.h>


@interface _MPUHTMLDefaultDelegate : NSObject <MPUHTMLParserDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSDictionary *defaultAttributes; // ivar: _defaultAttributes
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)defaultAttributesForParser:(id)arg0 ;
-(id)parser:(id)arg0 attributesForTagName:(id)arg1 tagAttributes:(id)arg2 currentState:(id)arg3 ;
-(id)parser:(id)arg0 prependStringForTagName:(id)arg1 ;


@end


#endif