// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UNSATOMICDATACONTENTPROTECTIONSTRATEGY_H
#define UNSATOMICDATACONTENTPROTECTIONSTRATEGY_H

@class NSString;
@protocol UNSContentProtectionStrategy;

#import <Foundation/Foundation.h>


@interface UNSAtomicDataContentProtectionStrategy : NSObject <UNSContentProtectionStrategy>

 {
    BOOL _excludeFromBackup;
    NSUInteger _dataWritingFileProtection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)dataIsAvailableAtPath:(id)arg0 ;
-(BOOL)removeItemAtPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeData:(id)arg0 atPath:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)_dataWritingOptionForFileProtectionType:(id)arg0 ;
-(id)dataAtPath:(id)arg0 ;
-(id)initWithFileProtectionType:(id)arg0 excludeFromBackup:(BOOL)arg1 ;
-(void)migrateDataAtPath:(id)arg0 toPath:(id)arg1 ;


@end


#endif