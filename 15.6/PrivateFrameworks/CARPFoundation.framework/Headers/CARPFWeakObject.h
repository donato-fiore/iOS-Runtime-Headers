// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CARPFWEAKOBJECT_H
#define CARPFWEAKOBJECT_H



#import "CARPFObject.h"

@interface CARPFWeakObject : CARPFObject

@property (readonly, weak) id *object; // ivar: _object
@property (readonly, nonatomic) NSUInteger objectHash; // ivar: _objectHash


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithWeakObject:(id)arg0 ;


@end


#endif