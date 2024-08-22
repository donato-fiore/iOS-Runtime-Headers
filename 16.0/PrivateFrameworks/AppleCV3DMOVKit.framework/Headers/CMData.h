// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMDATA_H
#define CMDATA_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CMData : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *additionalData; // ivar: _additionalData
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (nonatomic) BOOL isSent; // ivar: _isSent
@property (retain, nonatomic) NSString *sourcePeerDisplayName; // ivar: _sourcePeerDisplayName
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)classes;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMessage:(id)arg0 timestamp:(CGFloat)arg1 isSent:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif