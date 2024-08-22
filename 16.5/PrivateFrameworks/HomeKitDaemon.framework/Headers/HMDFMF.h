// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDFMF_H
#define HMDFMF_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface HMDFMF : NSObject

@property (readonly, nonatomic) NSNumber *number;
@property (readonly, nonatomic) NSUInteger value; // ivar: _value


+(id)fmfStatusWithCoder:(id)arg0 ;
+(id)fmfStatusWithDict:(id)arg0 ;
+(id)fmfStatusWithMessage:(id)arg0 ;
+(id)fmfStatusWithNumber:(id)arg0 ;
+(id)fmfStatusWithValue:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithNumber:(id)arg0 ;
-(void)addToCoder:(id)arg0 ;
-(void)addToPayload:(id)arg0 ;


@end


#endif