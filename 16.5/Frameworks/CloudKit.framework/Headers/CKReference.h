// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKREFERENCE_H
#define CKREFERENCE_H

@class NSString;
@protocol CKRecordValue, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CKRecordID.h"

@interface CKReference : NSObject <CKRecordValue, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) CKRecordID *recordID; // ivar: _recordID
@property (readonly, nonatomic) NSUInteger referenceAction; // ivar: _referenceAction
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(NSUInteger)ckReferenceActionForCKDPRecordReferenceType:(int)arg0 ;
+(int)ckdpReferenceTypeForCKReferenceAction:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)CKPropertiesDescription;
-(id)_initBare;
-(id)ckShortDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecord:(id)arg0 action:(NSUInteger)arg1 ;
-(id)initWithRecordID:(id)arg0 action:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif