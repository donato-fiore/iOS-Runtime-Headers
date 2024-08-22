// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLDEBUGINSTRUMENTATIONDATA_H
#define MTLDEBUGINSTRUMENTATIONDATA_H

@class NSData;
@protocol OS_dispatch_data;

#import <Foundation/Foundation.h>


@interface MTLDebugInstrumentationData : NSObject {
    NSObject<OS_dispatch_data> *_dataMap;
    *void _data;
    vector<const __CFString *, std::allocator<const __CFString *>> _strings;
    vector<MTLDebugLocation *, std::allocator<MTLDebugLocation *>> _debugLocations;
    vector<MTLDebugSubProgram *, std::allocator<MTLDebugSubProgram *>> _debugSubPrograms;
    NSData *_globalConstantsData;
    NSObject<OS_dispatch_data> *_userReflectionData;
}


@property (readonly, nonatomic) unsigned int activeThreadgroupMask;
@property (readonly, nonatomic) NSUInteger bufferAccessMask;
@property (readonly, nonatomic) BOOL hasArgumentBufferInstrumentationFailures;
@property (readonly, nonatomic) BOOL hasArgumentLimitsInstrumentationFailures;
@property (readonly, nonatomic) BOOL hasGlobalConstantsInstrumentationFailures;
@property (readonly, nonatomic) unsigned int threadgroupArgumentOffset;


-(id)debugLocationForID:(unsigned int)arg0 ;
-(id)debugSubProgramForID:(unsigned int)arg0 ;
-(id)globalConstantsData;
-(id)initWithData:(id)arg0 ;
-(id)stringForID:(unsigned int)arg0 ;
-(id)userReflectionData;
-(void)dealloc;


@end


#endif