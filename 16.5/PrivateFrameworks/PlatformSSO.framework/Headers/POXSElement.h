// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POXSELEMENT_H
#define POXSELEMENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface POXSElement : NSObject

@property (readonly, copy, nonatomic) NSString *elementName; // ivar: _elementName
@property (readonly, copy, nonatomic) NSString *namespaceURI; // ivar: _namespaceURI
@property (readonly, nonatomic) Class type; // ivar: _type


-(id)init;
-(id)initWithElementName:(id)arg0 namespaceURI:(id)arg1 type:(Class)arg2 ;


@end


#endif