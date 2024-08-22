// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPRECENTDOCUMENTSQUERYDESCRIPTOR_H
#define FPRECENTDOCUMENTSQUERYDESCRIPTOR_H



#import "FPSpotlightQueryDescriptor.h"

@interface FPRecentDocumentsQueryDescriptor : FPSpotlightQueryDescriptor



-(NSUInteger)desiredCount;
-(id)name;
-(id)queryStringForMountPoint:(id)arg0 ;
-(void)augmentQueryContext:(id)arg0 ;


@end


#endif