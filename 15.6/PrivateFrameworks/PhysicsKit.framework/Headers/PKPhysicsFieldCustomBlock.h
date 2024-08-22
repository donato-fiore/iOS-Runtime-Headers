// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPHYSICSFIELDCUSTOMBLOCK_H
#define PKPHYSICSFIELDCUSTOMBLOCK_H



#import "PKPhysicsField.h"

@interface PKPhysicsFieldCustomBlock : PKPhysicsField {
    id *_batchBlock;
    id *_block;
}




+(id)fieldWithCustomBatchBlock:(id)arg0 ;
+(id)fieldWithCustomBlock:(id)arg0 ;
-(id)initWithCustomBatchBlock:(id)arg0 ;
-(id)initWithCustomBlock:(id)arg0 ;


@end


#endif