// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUDIGEST_H
#define NUDIGEST_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NUDigest : NSObject {
    NSString *_stringValue;
    CC_MD5state_st _context;
}




-(id)init;
-(id)stringValue;
-(void)addBytes:(*void)arg0 length:(NSInteger)arg1 ;
-(void)addCString:(char *)arg0 ;
-(void)addString:(id)arg0 ;
-(void)finalize;


@end


#endif