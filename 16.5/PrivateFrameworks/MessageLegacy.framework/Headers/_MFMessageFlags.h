// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MFMESSAGEFLAGS_H
#define _MFMESSAGEFLAGS_H

@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface _MFMessageFlags : NSObject <NSCoding>

 {
    NSUInteger realFlags;
}




-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif