// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MPMEDIALIBRARYENTITYRELATIONSHIPTRANSLATOR_H
#define _MPMEDIALIBRARYENTITYRELATIONSHIPTRANSLATOR_H


#import <Foundation/Foundation.h>

#import "MPMediaLibraryEntityTranslator.h"

@interface _MPMediaLibraryEntityRelationshipTranslator : NSObject {
    ? _relationshipValidationProperties;
}


@property (readonly, nonatomic) MPMediaLibraryEntityTranslator *entityTranslator;
@property (nonatomic) *void foreignPropertyBase; // ivar: _foreignPropertyBase
@property (nonatomic) Class relationshipModelClass; // ivar: _relationshipModelClass
@property ? relationshipValidationProperties;
@property (nonatomic) BOOL transient; // ivar: _transient
@property (copy, nonatomic) id *validRelationshipHandler; // ivar: _validRelationshipHandler




@end


#endif