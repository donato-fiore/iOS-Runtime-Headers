// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDBACKINGSTORETRANSACTIONBLOCK_H
#define HMDBACKINGSTORETRANSACTIONBLOCK_H

@class HMFObject, NSString, NSMutableArray;
@protocol HMFLogging;


#import "HMDBackingStore.h"
#import "HMDBackingStoreTransactionOptions.h"

@interface HMDBackingStoreTransactionBlock : HMFObject <HMFLogging>



@property (weak, nonatomic) HMDBackingStore *backingStore; // ivar: _backingStore
@property (nonatomic) BOOL committed; // ivar: _committed
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *objects; // ivar: _objects
@property (readonly, nonatomic) HMDBackingStoreTransactionOptions *options; // ivar: _options
@property (readonly) Class superclass;


+(id)logCategory;
+(void)sort:(id)arg0 ;
-(id)initWithBackingStore:(id)arg0 options:(id)arg1 label:(id)arg2 ;
-(id)logIdentifier;
-(void)add:(id)arg0 ;
-(void)add:(id)arg0 withMessage:(id)arg1 ;
-(void)addObjects:(id)arg0 ;
-(void)dumpDebug;
-(void)dumpDebug:(id)arg0 ;
-(void)dumpWithVerbosity:(BOOL)arg0 prefix:(id)arg1 logType:(unsigned char)arg2 ;
-(void)run;
-(void)run:(id)arg0 ;
-(void)runWithoutSave:(id)arg0 ;
-(void)save;
-(void)save:(id)arg0 ;


@end


#endif