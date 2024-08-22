// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC18ACTIVITYUISERVICES20SIZEDIMENSIONREQUEST_H
#define _TTC18ACTIVITYUISERVICES20SIZEDIMENSIONREQUEST_H

@protocol NSCopying, NSSecureCoding, BSXPCCoding;

#import <Foundation/Foundation.h>


@interface _TtC18ActivityUIServices20SizeDimensionRequest : NSObject <NSCopying, NSSecureCoding, BSXPCCoding>



@property (nonatomic, readonly) CGFloat maximum; // ivar: maximum
@property (nonatomic, readonly) CGFloat minimum; // ivar: minimum
@property (nonatomic, readonly) NSInteger type; // ivar: type


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMinimum:(CGFloat)arg0 maximum:(CGFloat)arg1 ;
-(id)initWithMinimum:(CGFloat)arg0 maximum:(CGFloat)arg1 type:(NSInteger)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif