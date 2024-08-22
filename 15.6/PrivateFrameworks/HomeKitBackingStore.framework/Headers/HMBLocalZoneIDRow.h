// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMBLOCALZONEIDROW_H
#define HMBLOCALZONEIDROW_H

@class HMFObject, NSString, NSArray, NSData;
@protocol NSCopying, NSSecureCoding, HMBLocalZoneID;



@interface HMBLocalZoneIDRow : HMFObject <NSCopying, NSSecureCoding, HMBLocalZoneID>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *labels;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSData *token; // ivar: _token


+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 token:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif