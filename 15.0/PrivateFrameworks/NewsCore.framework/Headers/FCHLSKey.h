// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCHLSKEY_H
#define FCHLSKEY_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface FCHLSKey : NSObject {
    NSInteger _method;
    NSURL *_url;
    NSString *_keyFormat;
    NSString *_keyFormatVersions;
    NSString *_iv;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif