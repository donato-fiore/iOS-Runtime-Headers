// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRSPOSTERUPDATERESULT_H
#define PRSPOSTERUPDATERESULT_H

@class NSError;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PRSPosterUpdate.h"

@interface PRSPosterUpdateResult : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, copy, nonatomic) id *initialValue; // ivar: _initialValue
@property (readonly, copy, nonatomic) PRSPosterUpdate *update; // ivar: _update
@property (readonly, copy, nonatomic) id *updatedValue;


+(BOOL)supportsSecureCoding;
+(id)failedUpdateResultForUpdate:(id)arg0 error:(id)arg1 ;
+(id)successfulUpdateResultForUpdate:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUpdate:(id)arg0 ;
-(id)requestedValue;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif