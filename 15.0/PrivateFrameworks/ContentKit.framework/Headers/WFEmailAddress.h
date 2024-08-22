// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFEMAILADDRESS_H
#define WFEMAILADDRESS_H

@class NSString;
@protocol NSCopying, WFNaming, WFSerializableContent, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFEmailAddress : NSObject <NSCopying, WFNaming, WFSerializableContent, NSSecureCoding>



@property (readonly, nonatomic) NSString *address; // ivar: _address
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSString *localizedLabel;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *wfName;


+(BOOL)stringContainsEmailAddresses:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)addressWithEmailAddress:(id)arg0 ;
+(id)addressWithEmailAddress:(id)arg0 label:(id)arg1 ;
+(id)addressesWithMailtoURL:(id)arg0 ;
+(id)addressesWithTextCheckingResult:(id)arg0 ;
+(id)emailAddressesInString:(id)arg0 error:(*id)arg1 ;
+(id)objectWithWFSerializedRepresentation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAddress:(id)arg0 label:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)wfSerializedRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif