// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTKTRACETAPTRIGGERCONFIG_H
#define DTKTRACETAPTRIGGERCONFIG_H

@class NSMutableDictionary, NSString, NSArray;

#import <Foundation/Foundation.h>

#import "DTKPKDebugCodeSet.h"

@interface DTKTraceTapTriggerConfig : NSObject {
    NSMutableDictionary *_dict;
    DTKPKDebugCodeSet *_kdebugFilterSet;
}


@property (nonatomic) NSUInteger callstackFrameDepth;
@property (nonatomic) NSUInteger eventLimitHint;
@property (readonly, nonatomic) BOOL hasThreadStateFilter;
@property (nonatomic) BOOL isAllProcesses;
@property (retain, nonatomic) DTKPKDebugCodeSet *kdebugFilter;
@property (nonatomic) int kind;
@property (retain, nonatomic) NSString *pmiCounterName;
@property (retain, nonatomic) NSArray *pmiDeviceIndices;
@property (retain, nonatomic) NSString *pmiEventMnemonic;
@property (nonatomic) NSUInteger pmiEventThreshold;
@property (nonatomic) NSUInteger sampleInterval;
@property (readonly, retain, nonatomic) NSString *uuid;


+(id)deviceSignPostConfig;
-(id)_GetTriggerDict;
-(id)init;
-(id)initWithPlist:(id)arg0 ;
-(id)initWithUUIDString:(id)arg0 ;
-(id)plist;
-(void)_SetTriggerDict:(id)arg0 ;
-(void)addAction:(int)arg0 ;
-(void)enumerateActions:(id)arg0 ;
-(void)enumeratePIDsInFilter:(id)arg0 ;
-(void)enumerateThreadStatesToInclude:(id)arg0 ;
-(void)includePID:(int)arg0 ;
-(void)includeThreadState:(unsigned int)arg0 ;


@end


#endif