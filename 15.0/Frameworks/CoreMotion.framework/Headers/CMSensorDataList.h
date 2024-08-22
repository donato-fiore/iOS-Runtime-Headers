// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMSENSORDATALIST_H
#define CMSENSORDATALIST_H

@class NSMutableArray, NSArray;
@protocol NSFastEnumeration, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "CMSensorRecorderInternal.h"
#import "CLSensorRecorderSensorMeta.h"

@interface CMSensorDataList : NSObject <NSFastEnumeration>

 {
    CMSensorRecorderInternal *fProxy;
    NSObject<OS_xpc_object> *fDataBuffer;
    CLSensorRecorderSensorMeta *fCurrentBlock;
    NSUInteger fCurrentBlockIdentifier;
    NSInteger fCurrentBlockDataIdentifier;
    CGFloat fCurrentBlockStartTime;
    NSUInteger fCurrentBlockTimestamp;
    char * fDataBufferPtr;
    NSUInteger fDataBufferLength;
    NSUInteger fCurrentIdentifier;
    NSUInteger fStartingIdentifier;
    NSInteger fRetrievedDataBufferIdentifier;
    NSUInteger fBlockOffset;
    AccelUnpacker fAccelUnpacker;
    GyroUnpacker fGyroUnpacker;
    PressureUnpacker fPressureUnpacker;
    NSMutableArray *fCachedData;
    NSArray *fMetaArray;
    int fDataType;
}




-(BOOL)_updatePointers;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)initFrom:(CGFloat)arg0 to:(CGFloat)arg1 withType:(int)arg2 ;
-(id)initWithIdentifier:(NSUInteger)arg0 andType:(int)arg1 ;
-(void)_updateCurrentBlockProperties;
-(void)dealloc;


@end


#endif