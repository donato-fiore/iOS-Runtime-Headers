// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKCOLUMNCOLLECTIONELEMENT_H
#define IKCOLUMNCOLLECTIONELEMENT_H

@class NSArray;


#import "IKViewElement.h"

@interface IKColumnCollectionElement : IKViewElement {
    NSArray *_columns;
}


@property (readonly, retain, nonatomic) NSArray *columns;


-(id)applyUpdatesWithElement:(id)arg0 ;


@end


#endif