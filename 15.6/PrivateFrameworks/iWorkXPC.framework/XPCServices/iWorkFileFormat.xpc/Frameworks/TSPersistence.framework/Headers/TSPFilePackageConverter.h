// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPFILEPACKAGECONVERTER_H
#define TSPFILEPACKAGECONVERTER_H



#import "TSPPackageConverter.h"

@interface TSPFilePackageConverter : TSPPackageConverter



-(BOOL)isValid;
-(id)newWriteChannelAtPath:(id)arg0 lastModificationDate:(id)arg1 size:(NSUInteger)arg2 CRC:(unsigned int)arg3 packageWriter:(id)arg4 error:(*id)arg5 ;


@end


#endif