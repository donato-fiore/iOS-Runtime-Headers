// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MPMODELLIBRARYREGISTEREDTRANSIENTSTATE_H
#define _MPMODELLIBRARYREGISTEREDTRANSIENTSTATE_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "MPSectionedCollection.h"

@interface _MPModelLibraryRegisteredTransientState : NSObject

@property (nonatomic) NSInteger addState; // ivar: _addState
@property (nonatomic) NSInteger keepLocalState; // ivar: _keepLocalState
@property (copy, nonatomic) MPSectionedCollection *modelObjects; // ivar: _modelObjects
@property (copy, nonatomic) MPSectionedCollection *relatedModelObjects; // ivar: _relatedModelObjects
@property (copy, nonatomic) NSUUID *token; // ivar: _token




@end


#endif