// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MBDIGESTSHA1_H
#define MBDIGESTSHA1_H



#import "MBDigest.h"

@interface MBDigestSHA1 : MBDigest {
    CC_SHA1state_st _context;
}




-(id)final;
-(id)init;
-(void)finalWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)updateWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;


@end


#endif