// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKGRIDELEMENT_H
#define IKGRIDELEMENT_H

@class NSString;


#import "IKCollectionElement.h"

@interface IKGridElement : IKCollectionElement

@property (readonly, nonatomic) NSUInteger columnCount;
@property (readonly, nonatomic, getter=isPaged) BOOL paged; // ivar: _paged
@property (readonly, nonatomic) NSUInteger rowCount;
@property (readonly, nonatomic) NSString *rowHeight;


-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif