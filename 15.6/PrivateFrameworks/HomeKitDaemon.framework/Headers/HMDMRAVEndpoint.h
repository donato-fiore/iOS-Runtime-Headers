// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMRAVENDPOINT_H
#define HMDMRAVENDPOINT_H

@class HMFObject;



@interface HMDMRAVEndpoint : HMFObject

@property (readonly, nonatomic) *void mravEndpoint; // ivar: _mravEndpoint


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)initWithMRAVEndpoint:(*void)arg0 ;
-(void)dealloc;


@end


#endif