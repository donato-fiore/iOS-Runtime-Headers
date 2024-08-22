// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASTESTINGINPUT_H
#define SASTESTINGINPUT_H

@class NSURL, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SASTestingInput : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSURL *recordedSpeechURL; // ivar: _recordedSpeechURL
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif