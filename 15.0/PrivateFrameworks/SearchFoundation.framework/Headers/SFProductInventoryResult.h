// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFPRODUCTINVENTORYRESULT_H
#define SFPRODUCTINVENTORYRESULT_H

@class NSArray, NSString, NSDictionary, NSData;
@protocol SFProductInventoryResult, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SFProductInventoryResult : NSObject <SFProductInventoryResult, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSArray *availability; // ivar: _availability
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *productIdentifier; // ivar: _productIdentifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif