// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MTLPROGRAMADDRESSTABLE_H
#define _MTLPROGRAMADDRESSTABLE_H

@class NSArray, NSDictionary;
@protocol MTLProgramAddressTable;

#import <Foundation/Foundation.h>


@interface _MTLProgramAddressTable : NSObject <MTLProgramAddressTable>



@property (readonly) NSArray *binaryMappingsEncoderInternal; // ivar: _binaryMappingsEncoderInternal
@property (readonly) NSArray *binaryMappingsPerInvocation; // ivar: _binaryMappingsPerInvocation
@property (readonly) NSDictionary *encoderInternalBinaries; // ivar: _encoderInternalBinaries


-(id)initWithEncoderMappings:(id)arg0 perInvocationMappings:(id)arg1 internalMappings:(id)arg2 ;
-(void)dealloc;


@end


#endif