// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCOERCIONHANDLER_H
#define WFCOERCIONHANDLER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WFCoercionHandler : NSObject

@property (readonly, copy, nonatomic) id *asynchronousBlock; // ivar: _asynchronousBlock
@property (readonly, copy, nonatomic) id *availabilityCheck; // ivar: _availabilityCheck
@property (readonly, copy, nonatomic) id *block; // ivar: _block
@property (readonly, nonatomic) NSInteger concurrencyMode;
@property (readonly, copy, nonatomic) NSString *keyPath; // ivar: _keyPath


+(id)asynchronousBlock:(id)arg0 ;
// +(id)asynchronousBlock:(id)arg0 availabilityCheck:(unk)arg1  ;
+(id)block:(id)arg0 ;
// +(id)block:(id)arg0 availabilityCheck:(unk)arg1  ;
+(id)keyPath:(id)arg0 ;
+(id)keyPath:(id)arg0 availabilityCheck:(id)arg1 ;
+(id)keyPath:(id)arg0 unavailableIfNilOrEmpty:(BOOL)arg1 ;
-(BOOL)coercionIsAvailableForItem:(id)arg0 ;
-(BOOL)hasAvailabilityCheck;
// -(id)initWithBlock:(id)arg0 asynchronousBlock:(unk)arg1 keyPath:(id)arg2 availabilityCheck:(unk)arg3  ;
-(id)performSynchronousCoercionWithContentItem:(id)arg0 forType:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(void)performAsynchronousCoercionWithContentItem:(id)arg0 forType:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif