// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTVIRTUALCARDSTATUSUPDATE_H
#define PKACCOUNTVIRTUALCARDSTATUSUPDATE_H

@class NSString, NSArray;
@protocol NSSecureCoding, PKRecordObject;

#import <Foundation/Foundation.h>


@interface PKAccountVirtualCardStatusUpdate : NSObject <NSSecureCoding, PKRecordObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger reason; // ivar: _reason
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *updatedVirtualCards; // ivar: _updatedVirtualCards


+(BOOL)supportsSecureCoding;
+(id)recordNamePrefix;
+(id)recordType;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecord:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithRecord:(id)arg0 ;


@end


#endif