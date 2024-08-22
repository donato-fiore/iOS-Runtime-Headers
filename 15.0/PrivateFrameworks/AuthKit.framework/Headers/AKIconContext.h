// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKICONCONTEXT_H
#define AKICONCONTEXT_H

@class NSData, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AKIconContext : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *data; // ivar: _data
@property (nonatomic) NSUInteger maskingStyle; // ivar: _maskingStyle
@property (retain, nonatomic) NSNumber *scale; // ivar: _scale


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif