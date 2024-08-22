// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSHTTPCOOKIEINTERNAL_DATA_H
#define NSHTTPCOOKIEINTERNAL_DATA_H



#import "NSHTTPCookieInternal.h"

@interface NSHTTPCookieInternal_Data : NSHTTPCookieInternal {
    *CompactHTTPCookieWithData _fromData;
}




-(id)_initWithCookie:(id)arg0 partition:(id)arg1 ;
-(id)_initWithHeader:(struct CompactCookieHeader *)arg0 ;
-(id)_initWithProperties:(id)arg0 fromString:(BOOL)arg1 ;
-(id)init;
-(struct HTTPCookie *)_inner;
-(void)dealloc;


@end


#endif