// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCSYNCOPERATIONBACKOFFRATIO_H
#define BRCSYNCOPERATIONBACKOFFRATIO_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BRCSyncOperationBackoffRatio : NSObject <NSSecureCoding>

 {
    NSInteger _totalSyncOperations;
    NSInteger _failedSyncOperations;
}




+(BOOL)supportsSecureCoding;
-(float)backoffRatio;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)clear;
-(void)encodeWithCoder:(id)arg0 ;
-(void)newSyncOperationWithError:(id)arg0 ;


@end


#endif