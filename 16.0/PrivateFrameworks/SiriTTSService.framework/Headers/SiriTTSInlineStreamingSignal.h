// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRITTSINLINESTREAMINGSIGNAL_H
#define SIRITTSINLINESTREAMINGSIGNAL_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SiriTTSInlineStreamingSignal : NSObject <NSSecureCoding>

 {
    ? text;
    ? identifier;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *text;


+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithText:(id)arg0 identifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif