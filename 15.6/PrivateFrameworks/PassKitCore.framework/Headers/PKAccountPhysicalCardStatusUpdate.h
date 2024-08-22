// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTPHYSICALCARDSTATUSUPDATE_H
#define PKACCOUNTPHYSICALCARDSTATUSUPDATE_H

@class NSString, NSArray;
@protocol NSSecureCoding, PKRecordObject;

#import <Foundation/Foundation.h>


@interface PKAccountPhysicalCardStatusUpdate : NSObject <NSSecureCoding, PKRecordObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger reason; // ivar: _reason
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *updatedPhysicalCards; // ivar: _updatedPhysicalCards


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