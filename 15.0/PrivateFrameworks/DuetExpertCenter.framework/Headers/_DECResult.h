// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DECRESULT_H
#define _DECRESULT_H

@class NSUUID, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _DECResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger consumer; // ivar: _consumer
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (nonatomic) NSInteger reason; // ivar: _reason
@property (retain, nonatomic) NSDictionary *reasonMetadata; // ivar: _reasonMetadata
@property (retain, nonatomic) NSDictionary *results; // ivar: _results


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentToResult:(id)arg0 ;
-(BOOL)isEquivalentToResult:(id)arg0 limit:(NSUInteger)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConsumer:(NSUInteger)arg0 ;
-(id)resultForCategory:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif