// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSENGAGEMENTSYNCRESULT_H
#define AMSENGAGEMENTSYNCRESULT_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AMSEngagementSyncResult : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *actions; // ivar: _actions


+(BOOL)supportsSecureCoding;
+(id)archiveClasses;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif