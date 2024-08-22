// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MPBASEENTITYRELATIONSHIPTRANSLATOR_H
#define _MPBASEENTITYRELATIONSHIPTRANSLATOR_H

@class NSString;
@protocol MPEntityRelationshipTranslator;

#import <Foundation/Foundation.h>


@interface _MPBaseEntityRelationshipTranslator : NSObject <MPEntityRelationshipTranslator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) Class relatedMPModelClass; // ivar: _relatedMPModelClass
@property (readonly) Class superclass;


-(id)initWithRelatedMPModelClass:(Class)arg0 ;


@end


#endif