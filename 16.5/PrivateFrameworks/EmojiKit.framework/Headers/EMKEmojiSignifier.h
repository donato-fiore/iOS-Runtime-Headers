// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMKEMOJISIGNIFIER_H
#define EMKEMOJISIGNIFIER_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface EMKEmojiSignifier : NSObject <NSCopying>

 {
    NSString *_string;
}


@property (readonly) NSString *string;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithString:(id)arg0 ;


@end


#endif