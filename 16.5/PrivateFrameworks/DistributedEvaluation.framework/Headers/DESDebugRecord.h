// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DESDEBUGRECORD_H
#define DESDEBUGRECORD_H

@class NSMutableDictionary, NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "DESUserDefaultsStoreRecord.h"

@interface DESDebugRecord : NSObject {
    NSMutableDictionary *_debugInfo;
    DESUserDefaultsStoreRecord *_storeRecord;
}


@property (readonly, nonatomic) NSDictionary *debugInfo;
@property (readonly, nonatomic) NSString *recordID; // ivar: _recordID


+(id)recordIDFromPluginID:(id)arg0 taskSource:(NSInteger)arg1 ;
-(BOOL)commitWithError:(*id)arg0 ;
-(id)description;
-(id)initFromStoreWithPluginID:(id)arg0 taskSource:(NSInteger)arg1 ;
-(id)initWithPluginID:(id)arg0 taskSource:(NSInteger)arg1 ;
-(id)initWithRecordID:(id)arg0 debugInfo:(id)arg1 ;
-(id)stringForResult:(id)arg0 ;
-(void)addForTaskID:(id)arg0 result:(NSInteger)arg1 description:(id)arg2 ;


@end


#endif