// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MLNEURALNETWORKBASICTENSORDATASTORE_H
#define _MLNEURALNETWORKBASICTENSORDATASTORE_H

@class NSMutableData, NSString;
@protocol _MLNeuralNetworkTensorDataStoring;

#import <Foundation/Foundation.h>


@interface _MLNeuralNetworkBasicTensorDataStore : NSObject <_MLNeuralNetworkTensorDataStoring>



@property (readonly, nonatomic) NSMutableData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)writeToFile:(id)arg0 error:(*id)arg1 ;
-(id)initWithContentsOfFile:(id)arg0 error:(*id)arg1 ;
-(id)initWithData:(id)arg0 ;
-(id)tensorDataForOffset:(NSUInteger)arg0 expectedLength:(NSUInteger)arg1 ;


@end


#endif