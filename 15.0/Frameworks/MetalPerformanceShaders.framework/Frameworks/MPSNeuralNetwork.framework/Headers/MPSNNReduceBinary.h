// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSNNREDUCEBINARY_H
#define MPSNNREDUCEBINARY_H



#import "MPSCNNBinaryKernel.h"

@interface MPSNNReduceBinary : MPSCNNBinaryKernel {
    ? _clipRectPrimarySource;
    int _reduceOp;
}


@property (nonatomic) ? primaryOffset;
@property (nonatomic) ? primarySourceClipRect; // ivar: _primarySourceClipRect
@property (nonatomic) ? secondaryOffset;
@property (nonatomic) ? secondarySourceClipRect; // ivar: _secondarySourceClipRect


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 reduceOperation:(int)arg1 ;
-(int)reduceOp;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif