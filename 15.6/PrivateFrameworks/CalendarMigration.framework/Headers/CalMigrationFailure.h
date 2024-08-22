// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALMIGRATIONFAILURE_H
#define CALMIGRATIONFAILURE_H

@class NSString, NSError;

#import <Foundation/Foundation.h>


@interface CalMigrationFailure : NSObject

@property (readonly, copy, nonatomic) NSString *failureDescription; // ivar: _failureDescription
@property (readonly, copy, nonatomic) NSString *relatedPath; // ivar: _relatedPath
@property (readonly, nonatomic) NSUInteger stage; // ivar: _stage
@property (readonly, copy, nonatomic) NSError *underlyingError; // ivar: _underlyingError


+(id)_labelForStage:(NSUInteger)arg0 ;
-(id)description;
-(id)initWithDescription:(id)arg0 stage:(NSUInteger)arg1 underlyingError:(id)arg2 relatedPath:(id)arg3 ;


@end


#endif