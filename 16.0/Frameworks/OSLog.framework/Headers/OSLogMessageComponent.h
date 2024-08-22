// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSLOGMESSAGECOMPONENT_H
#define OSLOGMESSAGECOMPONENT_H

@class NSData, NSNumber, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface OSLogMessageComponent : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger argumentCategory; // ivar: _argumentCategory
@property (copy, nonatomic) NSData *argumentDataValue; // ivar: _argumentDataValue
@property (readonly, nonatomic) CGFloat argumentDoubleValue; // ivar: _argumentDoubleValue
@property (readonly, nonatomic) NSInteger argumentInt64Value; // ivar: _argumentInt64Value
@property (copy, nonatomic) NSNumber *argumentNumberValue; // ivar: _argumentNumberValue
@property (copy, nonatomic) NSString *argumentStringValue; // ivar: _argumentStringValue
@property (readonly, nonatomic) NSUInteger argumentUInt64Value; // ivar: _argumentUInt64Value
@property (copy, nonatomic) NSString *formatSubstring; // ivar: _formatSubstring
@property (copy, nonatomic) NSString *placeholder; // ivar: _placeholder


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDecomposedMessage:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fillWithData:(id)arg0 ;
-(void)fillWithScalar:(id)arg0 ;
-(void)fillWithString:(id)arg0 ;


@end


#endif