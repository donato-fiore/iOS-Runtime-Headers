// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCBCORECRYPTOECPOINT_H
#define CKCBCORECRYPTOECPOINT_H


#import <Foundation/Foundation.h>


@interface CKCBCorecryptoECPoint : NSObject

@property (readonly, nonatomic) *ccec_cp group; // ivar: _group
@property (readonly, nonatomic) *ccec_affine_point point; // ivar: _point


+(NSUInteger)groupOrderByteCountForCP:(struct ccec_cp *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)pointAllocationSizeForGroup:(struct ccec_cp *)arg0 ;
-(id)add:(id)arg0 corecryptoError:(*int)arg1 ;
-(id)initFromPublicKeyBytes:(id)arg0 inGroup:(struct ccec_cp *)arg1 compressed:(BOOL)arg2 corecryptoError:(*int)arg3 ;
-(id)initPoint:(struct ccec_affine_point *)arg0 onGroup:(struct ccec_cp *)arg1 ;
-(id)initWithGeneratorForCP:(struct ccec_cp *)arg0 ;
-(id)initWithPublicKey:(struct ccec_pub_ctx *)arg0 ;
-(id)multiply:(id)arg0 corecryptoError:(*int)arg1 ;
-(id)serializedPublicKey:(BOOL)arg0 ;
-(void)dealloc;


@end


#endif