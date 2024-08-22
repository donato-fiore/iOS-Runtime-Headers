// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKSECTIONELEMENT_H
#define IKSECTIONELEMENT_H

@class NSArray;


#import "IKDataSourceElement.h"
#import "IKViewElement.h"
#import "IKHeaderElement.h"

@interface IKSectionElement : IKDataSourceElement {
    NSArray *_items;
}


@property (readonly, retain, nonatomic) IKViewElement *footer;
@property (readonly, retain, nonatomic) IKHeaderElement *header;
@property (readonly, retain, nonatomic) NSArray *items;


-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)unboundItemElements;
-(void)appDocumentDidMarkStylesDirty;


@end


#endif