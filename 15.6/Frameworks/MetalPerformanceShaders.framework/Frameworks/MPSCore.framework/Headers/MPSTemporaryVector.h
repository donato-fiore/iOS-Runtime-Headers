// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSTEMPORARYVECTOR_H
#define MPSTEMPORARYVECTOR_H



#import "MPSVector.h"

@interface MPSTemporaryVector : MPSVector

@property (nonatomic) NSUInteger readCount; // ivar: _readCount


+(id)temporaryVectorWithCommandBuffer:(id)arg0 descriptor:(id)arg1 ;
+(void)prefetchStorageWithCommandBuffer:(id)arg0 descriptorList:(id)arg1 ;
-(id)initWithCommandBuffer:(id)arg0 descriptor:(id)arg1 ;
-(void)synchronizeOnCommandBuffer:(id)arg0 ;


@end


#endif