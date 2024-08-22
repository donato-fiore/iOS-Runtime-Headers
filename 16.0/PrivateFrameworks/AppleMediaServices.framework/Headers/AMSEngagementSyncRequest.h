// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSENGAGEMENTSYNCREQUEST_H
#define AMSENGAGEMENTSYNCREQUEST_H

@class NSArray, NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AMSEngagementSyncRequest : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *apps; // ivar: _apps
@property (retain, nonatomic) NSDictionary *context; // ivar: _context
@property (retain, nonatomic) NSString *logKey; // ivar: _logKey
@property (nonatomic) CGFloat timeout; // ivar: _timeout


+(BOOL)supportsSecureCoding;
+(id)archiveClasses;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif