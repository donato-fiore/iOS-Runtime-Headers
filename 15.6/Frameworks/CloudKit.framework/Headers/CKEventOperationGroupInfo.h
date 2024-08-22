// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKEVENTOPERATIONGROUPINFO_H
#define CKEVENTOPERATIONGROUPINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKEventOperationGroupInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *operationGroupID; // ivar: _operationGroupID
@property (readonly, nonatomic) NSString *operationGroupName; // ivar: _operationGroupName


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif