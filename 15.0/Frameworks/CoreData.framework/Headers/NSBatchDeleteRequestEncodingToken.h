// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSBATCHDELETEREQUESTENCODINGTOKEN_H
#define NSBATCHDELETEREQUESTENCODINGTOKEN_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSBatchDeleteRequestEncodingToken : NSObject <NSSecureCoding>



@property (readonly, retain, nonatomic) NSData *fetchData; // ivar: _fetchData
@property (readonly, nonatomic) NSInteger resultType; // ivar: _resultType
@property (readonly, nonatomic) BOOL secure; // ivar: _secure


+(BOOL)supportsSecureCoding;
-(id)initForRequest:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif