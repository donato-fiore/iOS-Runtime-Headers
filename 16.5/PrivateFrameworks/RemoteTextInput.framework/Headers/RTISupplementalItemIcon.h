// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTISUPPLEMENTALITEMICON_H
#define RTISUPPLEMENTALITEMICON_H

@class NSData, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface RTISupplementalItemIcon : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSString *dataType; // ivar: _dataType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDataType:(id)arg0 data:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif