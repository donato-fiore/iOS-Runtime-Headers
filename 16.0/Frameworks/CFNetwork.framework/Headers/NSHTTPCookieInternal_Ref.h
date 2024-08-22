// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSHTTPCOOKIEINTERNAL_REF_H
#define NSHTTPCOOKIEINTERNAL_REF_H



#import "NSHTTPCookieInternal.h"

@interface NSHTTPCookieInternal_Ref : NSHTTPCookieInternal {
    *CompactHTTPCookieReference _fromRef;
}




-(id)_initWithReference:(struct CompactCookieArray *)arg0 index:(NSInteger)arg1 ;
-(id)init;
-(struct HTTPCookie *)_inner;
-(void)dealloc;


@end


#endif