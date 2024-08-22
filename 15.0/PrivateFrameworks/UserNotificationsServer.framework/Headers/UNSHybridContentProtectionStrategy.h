// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UNSHYBRIDCONTENTPROTECTIONSTRATEGY_H
#define UNSHYBRIDCONTENTPROTECTIONSTRATEGY_H

@class NSString;
@protocol UNSContentProtectionStrategy, UNSHybridContentProtectionStrategyDelegate;

#import <Foundation/Foundation.h>

#import "UNSAtomicDataContentProtectionStrategy.h"
#import "UNSFileHandleContentProtectionStrategy.h"

@interface UNSHybridContentProtectionStrategy : NSObject <UNSContentProtectionStrategy>

 {
    id<UNSHybridContentProtectionStrategyDelegate> *_delegate;
    NSString *_minimumProtection;
    BOOL _needsMerge;
    UNSAtomicDataContentProtectionStrategy *_protectedContentAvailableStrategy;
    UNSFileHandleContentProtectionStrategy *_protectedContentUnavailableStrategy;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_mergeIsSupported;
-(BOOL)dataIsAvailableAtPath:(id)arg0 ;
-(BOOL)isProtectedDataAvailable;
-(BOOL)removeItemAtPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeData:(id)arg0 atPath:(id)arg1 error:(*id)arg2 ;
-(id)_strategyForProtectionState;
-(id)dataAtPath:(id)arg0 ;
-(id)initWithFileProtectionType:(id)arg0 delegate:(id)arg1 ;
-(void)importDataWithImportHandler:(id)arg0 ;
-(void)migrateDataAtPath:(id)arg0 toPath:(id)arg1 ;


@end


#endif