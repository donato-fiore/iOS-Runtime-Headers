// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIDESPACKAGERESULT_H
#define HMIDESPACKAGERESULT_H

@class HMFObject, NSData;



@interface HMIDESPackageResult : HMFObject

@property (readonly) BOOL didEncryptPackageResult; // ivar: _didEncryptPackageResult
@property (readonly) BOOL didPrivatizePackageResult; // ivar: _didPrivatizePackageResult
@property (readonly) float l2Norm; // ivar: _l2Norm
@property (readonly) CGFloat maxNorm; // ivar: _maxNorm
@property (readonly) NSData *result; // ivar: _result


-(id)initWithPackageResult:(id)arg0 didPrivatizePackageResult:(BOOL)arg1 didEncryptPackageResult:(BOOL)arg2 maxNorm:(CGFloat)arg3 l2Norm:(float)arg4 ;


@end


#endif