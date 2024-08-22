// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WCAFETCHREQUEST_H
#define WCAFETCHREQUEST_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WCAAsset.h"

@interface WCAFetchRequest : NSObject <NSSecureCoding>



@property (retain, nonatomic) WCAAsset *asset; // ivar: _asset
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif