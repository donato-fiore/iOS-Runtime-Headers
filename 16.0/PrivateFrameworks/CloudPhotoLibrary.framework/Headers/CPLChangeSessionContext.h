// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLCHANGESESSIONCONTEXT_H
#define CPLCHANGESESSIONCONTEXT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CPLResetTracker.h"

@interface CPLChangeSessionContext : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger estimatedInitialAssetCountForLocalLibrary; // ivar: _estimatedInitialAssetCountForLocalLibrary
@property (nonatomic) NSUInteger estimatedInitialSizeForLocalLibrary; // ivar: _estimatedInitialSizeForLocalLibrary
@property (retain, nonatomic) CPLResetTracker *resetTracker; // ivar: _resetTracker


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif