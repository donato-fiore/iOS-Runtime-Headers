// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKSOURCECHANGE_H
#define EKSOURCECHANGE_H



#import "EKObjectChange.h"

@interface EKSourceChange : EKObjectChange



+(int)entityType;
+(void)fetchSourceChangesInStore:(id)arg0 resultHandler:(id)arg1 ;


@end


#endif