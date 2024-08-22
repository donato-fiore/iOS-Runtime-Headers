// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PMLESPRESSODATAPROVIDER_H
#define PMLESPRESSODATAPROVIDER_H

@class NSArray, NSData, NSString, NSMutableData;
@protocol ETDataProvider;

#import <Foundation/Foundation.h>


@interface PMLEspressoDataProvider : NSObject <ETDataProvider>

 {
    NSArray *_rowsData;
    NSData *_labelsData;
    NSString *_inputName;
    NSUInteger _inputDim;
    NSString *_trueLabelName;
    NSUInteger _numberOfDataPoints;
    NSMutableData *_inputBuffer;
    NSMutableData *_trueLabelBuffer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)numberOfDataPoints;
-(id)dataPointAtIndex:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithRowsData:(id)arg0 labelsData:(id)arg1 inputName:(id)arg2 inputDim:(NSUInteger)arg3 trueLabelName:(id)arg4 ;
-(void)clearBuffers;


@end


#endif