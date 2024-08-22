// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKEVENTOPERATIONINFO_H
#define CKEVENTOPERATIONINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKEventOperationInfo : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *operationGroupID; // ivar: _operationGroupID
@property (readonly, copy, nonatomic) NSString *operationID; // ivar: _operationID
@property (readonly, copy, nonatomic) NSString *operationType; // ivar: _operationType


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOperation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif