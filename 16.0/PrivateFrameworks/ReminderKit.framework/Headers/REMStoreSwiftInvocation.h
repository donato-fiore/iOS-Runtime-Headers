// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMSTORESWIFTINVOCATION_H
#define REMSTORESWIFTINVOCATION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "REMFetchResultToken.h"

@interface REMStoreSwiftInvocation : NSObject <NSSecureCoding>



@property (readonly, nonatomic) REMFetchResultToken *fetchResultTokenToDiffAgainst; // ivar: _fetchResultTokenToDiffAgainst
@property (readonly, nonatomic) NSString *name;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFetchResultTokenToDiffAgainst:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif