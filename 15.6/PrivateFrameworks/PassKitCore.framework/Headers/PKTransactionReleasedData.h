// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTRANSACTIONRELEASEDDATA_H
#define PKTRANSACTIONRELEASEDDATA_H

@class NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKTransactionReleasedData : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSSet *elements; // ivar: _elements


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToReleasedData:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif