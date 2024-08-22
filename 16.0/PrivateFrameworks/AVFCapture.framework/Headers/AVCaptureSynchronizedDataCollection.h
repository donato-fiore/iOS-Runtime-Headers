// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCAPTURESYNCHRONIZEDDATACOLLECTION_H
#define AVCAPTURESYNCHRONIZEDDATACOLLECTION_H

@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>

#import "AVCaptureSynchronizedDataCollectionInternal.h"

@interface AVCaptureSynchronizedDataCollection : NSObject <NSFastEnumeration>

 {
    AVCaptureSynchronizedDataCollectionInternal *_internal;
}


@property (readonly) NSUInteger count;


+(void)initialize;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)_initWithPossibleDataOutputs:(id)arg0 ;
-(id)_shortStringForDataDroppedReason:(NSInteger)arg0 ;
-(id)_shortStringForDataOutput:(id)arg0 syncedData:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)synchronizedDataForCaptureOutput:(id)arg0 ;
-(void)_setSynchronizedData:(id)arg0 forCaptureOutput:(id)arg1 ;
-(void)dealloc;


@end


#endif