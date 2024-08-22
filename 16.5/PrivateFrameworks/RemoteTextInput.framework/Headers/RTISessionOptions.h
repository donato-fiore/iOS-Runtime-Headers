// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTISESSIONOPTIONS_H
#define RTISESSIONOPTIONS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RTISessionOptions : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL animated; // ivar: _animated
@property (nonatomic) BOOL enhancedWindowingModeEnabled; // ivar: _enhancedWindowingModeEnabled
@property (nonatomic) NSInteger offscreenDirection; // ivar: _offscreenDirection
@property (nonatomic) BOOL shouldResign; // ivar: _shouldResign


+(BOOL)supportsSecureCoding;
+(id)defaultBeginOptions;
+(id)defaultEndOptions;
+(id)defaultOptions;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif