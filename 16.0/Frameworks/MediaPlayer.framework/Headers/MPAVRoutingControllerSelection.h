// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPAVROUTINGCONTROLLERSELECTION_H
#define MPAVROUTINGCONTROLLERSELECTION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MPAVRoutingControllerSelection : NSObject

@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) NSArray *routes; // ivar: _routes
@property (nonatomic) NSInteger selectionOperation; // ivar: _selectionOperation


-(id)description;
-(id)initWithRoutes:(id)arg0 selectionOperation:(NSInteger)arg1 ;


@end


#endif