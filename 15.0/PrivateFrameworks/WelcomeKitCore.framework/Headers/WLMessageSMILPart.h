// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLMESSAGESMILPART_H
#define WLMESSAGESMILPART_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface WLMessageSMILPart : NSObject

@property (readonly, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (readonly, nonatomic) NSString *elementName; // ivar: _elementName


-(id)fileName;
-(id)initWithElementName:(id)arg0 attributes:(id)arg1 ;


@end


#endif