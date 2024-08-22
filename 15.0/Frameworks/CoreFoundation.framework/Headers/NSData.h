// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSDATA_H
#define NSDATA_H

@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSData : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly) *void bytes;
@property (readonly) NSUInteger length;


+(BOOL)supportsSecureCoding;


@end


#endif