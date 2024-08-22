// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSSSHARE_H
#define CKSSSHARE_H


#import <Foundation/Foundation.h>


@interface CKSSShare : NSObject {
    *ccss_shamir_share _share;
    NSUInteger _share_size;
}




-(id)initWithParams:(struct ccss_shamir_parameters *)arg0 share:(struct ccss_shamir_share *)arg1 ;
-(id)initWithParams:(struct ccss_shamir_parameters *)arg0 x:(unsigned int)arg1 y:(id)arg2 ;
-(id)y;
-(struct ccss_shamir_share *)share;
-(unsigned int)x;
-(void)dealloc;


@end


#endif