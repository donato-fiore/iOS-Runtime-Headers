// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCHANGEPEOPLETYPEACTION_H
#define PXCHANGEPEOPLETYPEACTION_H

@protocol PXFastEnumeration;


#import "PXPhotosAction.h"

@interface PXChangePeopleTypeAction : PXPhotosAction {
    id<PXFastEnumeration> *_collections;
}


@property (nonatomic) NSUInteger firstManualOrder; // ivar: _firstManualOrder
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)actionIdentifier;
-(id)actionNameLocalizationKey;
-(id)collections;
-(id)initWithPeople:(id)arg0 type:(NSInteger)arg1 ;
-(void)performAction:(id)arg0 ;
-(void)performUndo:(id)arg0 ;


@end


#endif