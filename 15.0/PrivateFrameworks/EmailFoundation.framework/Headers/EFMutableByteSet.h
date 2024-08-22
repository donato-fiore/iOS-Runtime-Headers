// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EFMUTABLEBYTESET_H
#define EFMUTABLEBYTESET_H



#import "EFByteSet.h"

@interface EFMutableByteSet : EFByteSet



-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)addBytesInRange:(struct _NSRange )arg0 ;
-(void)invert;
-(void)removeBytesInRange:(struct _NSRange )arg0 ;


@end


#endif