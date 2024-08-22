// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMDSLGRAPHVALIDATOR_H
#define BMDSLGRAPHVALIDATOR_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface BMDSLGraphValidator : NSObject

@property (readonly, copy, nonatomic) NSSet *allowedOperations; // ivar: _allowedOperations
@property (readonly, copy, nonatomic) NSSet *allowedStreamTypes; // ivar: _allowedStreamTypes
@property (readonly, nonatomic) BOOL passthrough; // ivar: _passthrough
@property (readonly, copy, nonatomic) NSSet *validKeyPaths; // ivar: _validKeyPaths


+(id)currentProcessValidator;
+(id)genericValidKeyPaths;
+(id)legacyValidKeyPaths;
+(void)setCurrentProcessValidator:(id)arg0 ;
-(BOOL)isExecutionAllowedForGraph:(id)arg0 ;
-(BOOL)isStreamTypeAllowed:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithValidKeyPaths:(id)arg0 allowedOperations:(id)arg1 allowedStreamTypes:(id)arg2 ;


@end


#endif