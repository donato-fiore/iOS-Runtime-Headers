// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXCGRECTWRAPPER_H
#define ATXCGRECTWRAPPER_H

@protocol NSSecureCoding, ATXProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface ATXCGRectWrapper : NSObject <NSSecureCoding, ATXProtoBufWrapper>



@property (nonatomic) CGRect rect; // ivar: _rect


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXCGRectWrapper:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)encodeAsProto;
-(id)initWithCGRect:(struct CGRect )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif