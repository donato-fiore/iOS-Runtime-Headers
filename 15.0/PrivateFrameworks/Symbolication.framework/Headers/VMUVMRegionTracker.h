// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VMUVMREGIONTRACKER_H
#define VMUVMREGIONTRACKER_H

@class NSMutableArray;
@protocol NSSecureCoding, VMUStackLogReader;

#import <Foundation/Foundation.h>


@interface VMUVMRegionTracker : NSObject <NSSecureCoding>

 {
    id<VMUStackLogReader> *_stackLogReader;
    NSMutableArray *_regionInfoArray;
}


@property (readonly) NSInteger regionCount;


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(NSUInteger)_regionIndexForAddress:(NSUInteger)arg0 ;
-(NSUInteger)handleStackLogType:(unsigned int)arg0 address:(NSUInteger)arg1 size:(NSUInteger)arg2 stackID:(NSUInteger)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTask:(unsigned int)arg0 ;
-(id)initWithTask:(unsigned int)arg0 stackLogReader:(id)arg1 ;
-(id)vmRegionRangeInfoForRange:(struct _VMURange )arg0 ;
-(void)convertStackIDs:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif