// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTRANSACTIONRELEASEDDATAELEMENT_H
#define PKTRANSACTIONRELEASEDDATAELEMENT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKTransactionReleasedDataElement : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *elementNamespace; // ivar: _elementNamespace
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSUInteger retentionIntent; // ivar: _retentionIntent


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToReleasedDataElement:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif