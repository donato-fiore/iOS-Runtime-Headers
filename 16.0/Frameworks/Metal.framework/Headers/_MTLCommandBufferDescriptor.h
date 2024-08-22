// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MTLCOMMANDBUFFERDESCRIPTOR_H
#define _MTLCOMMANDBUFFERDESCRIPTOR_H

@protocol MTLDeadlineProfile;


#import "MTLCommandBufferDescriptor.h"

@interface _MTLCommandBufferDescriptor : MTLCommandBufferDescriptor {
    BOOL _retainedReferences;
    NSUInteger _errorOptions;
}


@property (nonatomic) BOOL captureProgramAddressTable; // ivar: _captureProgramAddressTable
@property (nonatomic) NSObject<MTLDeadlineProfile> *deadlineProfile; // ivar: _deadlineProfile


-(BOOL)retainedReferences;
-(NSUInteger)errorOptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)setErrorOptions:(NSUInteger)arg0 ;
-(void)setRetainedReferences:(BOOL)arg0 ;


@end


#endif