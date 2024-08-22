// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCHLSMEDIA_H
#define FCHLSMEDIA_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface FCHLSMedia : NSObject {
    NSString *_type;
    NSURL *_url;
    NSString *_name;
}




-(id)description;


@end


#endif