// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ILMESSAGEFILTERCAPABILITIESQUERYRESPONSE_H
#define ILMESSAGEFILTERCAPABILITIESQUERYRESPONSE_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ILMessageFilterCapabilitiesQueryResponse : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *promotionalSubActions; // ivar: _promotionalSubActions
@property (copy, nonatomic) NSArray *transactionalSubActions; // ivar: _transactionalSubActions
@property (copy, nonatomic) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCapabilitiesResponse:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif