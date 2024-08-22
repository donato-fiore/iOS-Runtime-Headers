// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCLOUDRECORDACCOUNT_H
#define PKCLOUDRECORDACCOUNT_H



#import "PKCloudRecordObject.h"
#import "PKAccount.h"

@interface PKCloudRecordAccount : PKCloudRecordObject

@property (retain, nonatomic) PKAccount *account; // ivar: _account


+(BOOL)supportsSecureCoding;
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