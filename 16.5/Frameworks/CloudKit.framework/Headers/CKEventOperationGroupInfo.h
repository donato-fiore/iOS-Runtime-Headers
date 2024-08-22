// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKEVENTOPERATIONGROUPINFO_H
#define CKEVENTOPERATIONGROUPINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKEventOperationGroupInfo : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *operationGroupID; // ivar: _operationGroupID
@property (readonly, copy, nonatomic) NSString *operationGroupName; // ivar: _operationGroupName


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif