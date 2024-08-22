// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MIDATAPROTECTIONCHANGEOPERATION_H
#define MIDATAPROTECTIONCHANGEOPERATION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MIDataProtectionChangeOperation : NSObject

@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (readonly, nonatomic) int newClass; // ivar: _newClass
@property (readonly, nonatomic) NSUInteger operationType; // ivar: _operationType
@property (readonly, nonatomic) NSArray *urls; // ivar: _urls


+(id)dataProtectionChangeOperationForURL:(id)arg0 settingClass:(int)arg1 changeType:(NSUInteger)arg2 ;
+(id)dataProtectionChangeOperationForURLs:(id)arg0 settingClass:(int)arg1 changeType:(NSUInteger)arg2 ;
-(BOOL)_runChangeOperationWasLocked:(*BOOL)arg0 withError:(*id)arg1 ;
-(id)initWithURLs:(id)arg0 newClass:(int)arg1 changeType:(NSUInteger)arg2 ;
-(void)performChangeOperation;


@end


#endif