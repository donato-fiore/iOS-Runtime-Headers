// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKUPNEXTELEMENT_H
#define NTKUPNEXTELEMENT_H

@class REElement, NSString;

#import <Foundation/Foundation.h>


@interface NTKUpNextElement : NSObject

@property (retain, nonatomic) REElement *element; // ivar: _element
@property (readonly, nonatomic) NSString *elementIdentifier; // ivar: _elementIdentifier


+(id)elementWithREElement:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithREElement:(id)arg0 ;


@end


#endif