// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKEVENTOPERATIONINFO_H
#define CKEVENTOPERATIONINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKEventOperationInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *operationGroupID; // ivar: _operationGroupID
@property (readonly, nonatomic) NSString *operationID; // ivar: _operationID
@property (readonly, nonatomic) NSString *operationType; // ivar: _operationType


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOperation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif