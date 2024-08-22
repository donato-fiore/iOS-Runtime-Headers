// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DPPIRAPPORENCODERRESULT_H
#define _DPPIRAPPORENCODERRESULT_H

@class NSData;

#import <Foundation/Foundation.h>


@interface _DPPiRapporEncoderResult : NSObject

@property (readonly, nonatomic) NSUInteger numberOfEncodedIndices; // ivar: _numberOfEncodedIndices
@property (readonly, nonatomic) NSUInteger numberOfOtherPhi; // ivar: _numberOfOtherPhi
@property (readonly, nonatomic) NSData *otherPhi; // ivar: _otherPhi
@property (readonly, nonatomic) NSData *phi0; // ivar: _phi0


+(id)encoderResultWithPhi0:(id)arg0 otherPhi:(id)arg1 ;
-(id)init;
-(id)initWithPhi0:(id)arg0 otherPhi:(id)arg1 ;


@end


#endif