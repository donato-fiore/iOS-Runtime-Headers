// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUNIVERSALLINKSUPDATERESULT_H
#define AMSUNIVERSALLINKSUPDATERESULT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AMSUniversalLinksUpdateResult : NSObject <NSSecureCoding>



@property (nonatomic) BOOL success; // ivar: _success


+(BOOL)supportsSecureCoding;
+(id)archiveClasses;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif