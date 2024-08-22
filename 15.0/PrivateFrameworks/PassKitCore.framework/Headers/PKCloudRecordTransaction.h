// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKCLOUDRECORDTRANSACTION_H
#define PKCLOUDRECORDTRANSACTION_H



#import "PKCloudRecordObject.h"
#import "PKPaymentTransaction.h"

@interface PKCloudRecordTransaction : PKCloudRecordObject

@property (retain, nonatomic) PKPaymentTransaction *transaction; // ivar: _transaction


+(BOOL)supportsSecureCoding;
+(id)dateFormatter;
-(NSInteger)compare:(id)arg0 ;
-(id)_descriptionWithIncludeItem:(BOOL)arg0 ;
-(id)description;
-(id)descriptionWithItem:(BOOL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)item;
-(void)applyCloudRecordObject:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif