// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMFWEAKOBJECT_H
#define HMFWEAKOBJECT_H



#import "HMFObject.h"

@interface HMFWeakObject : HMFObject

@property (readonly, weak) id *object; // ivar: _object
@property (readonly, nonatomic) NSUInteger objectHash; // ivar: _objectHash


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithWeakObject:(id)arg0 ;


@end


#endif