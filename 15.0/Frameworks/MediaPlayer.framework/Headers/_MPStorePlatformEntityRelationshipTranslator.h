// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MPSTOREPLATFORMENTITYRELATIONSHIPTRANSLATOR_H
#define _MPSTOREPLATFORMENTITYRELATIONSHIPTRANSLATOR_H

@class MPKeyPathEntityRelationshipTranslator;



@interface _MPStorePlatformEntityRelationshipTranslator : MPKeyPathEntityRelationshipTranslator

@property (readonly, nonatomic) id *payloadTransformBlock; // ivar: _payloadTransformBlock


-(id)initWithRelatedMPModelClass:(Class)arg0 payloadTransformBlock:(id)arg1 ;
-(id)prepareSource:(id)arg0 context:(id)arg1 ;


@end


#endif