// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPSHAREDDOCUMENTSQUERYDESCRIPTOR_H
#define FPSHAREDDOCUMENTSQUERYDESCRIPTOR_H



#import "FPSpotlightQueryDescriptor.h"

@interface FPSharedDocumentsQueryDescriptor : FPSpotlightQueryDescriptor



-(BOOL)supportsQueryingAllMountPoints;
-(id)name;
-(id)queryStringForMountPoint:(id)arg0 ;


@end


#endif