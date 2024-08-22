// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDBACKINGSTOREUPDATEOBJECTREFERENCE_H
#define HMDBACKINGSTOREUPDATEOBJECTREFERENCE_H

@class NSOperation, NSUUID;



@interface HMDBackingStoreUpdateObjectReference : NSOperation

@property (weak, nonatomic) id *object; // ivar: _object
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


-(id)initWithObject:(id)arg0 uuid:(id)arg1 ;
-(void)main;


@end


#endif