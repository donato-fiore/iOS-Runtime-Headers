// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MADREQUEST_H
#define MADREQUEST_H

@class NSError, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MADRequest : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSArray *results; // ivar: _results


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif