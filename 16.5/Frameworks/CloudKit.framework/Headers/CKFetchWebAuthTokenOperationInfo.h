// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKFETCHWEBAUTHTOKENOPERATIONINFO_H
#define CKFETCHWEBAUTHTOKENOPERATIONINFO_H

@class NSString;
@protocol NSSecureCoding;


#import "CKDatabaseOperationInfo.h"

@interface CKFetchWebAuthTokenOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>



@property (retain, nonatomic) NSString *APIToken; // ivar: _APIToken


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif