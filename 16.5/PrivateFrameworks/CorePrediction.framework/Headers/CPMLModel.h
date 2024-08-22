// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPMLMODEL_H
#define CPMLMODEL_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CPMLModelEvaluate.h"

@interface CPMLModel : NSObject {
    NSString *_savedPlistPath;
    NSString *_modelPath;
    NSObject<OS_dispatch_queue> *_dispatch_queue;
    *void _mData;
    NSUInteger _totalBytesIntSection;
    NSUInteger _totalBytesRealSection;
    *CGFloat _realBase;
}


@property (retain) CPMLModelEvaluate *cpModelEvaluate; // ivar: cpModelEvaluate


+(id)initCPModelPath:(id)arg0 withConfiguration:(id)arg1 ;
-(BOOL)reset;
-(BOOL)updateModelWithCPDB:(id)arg0 ;
-(BOOL)updateModelWithDB:(id)arg0 ;
-(id)evalArray:(id)arg0 ;
-(id)evalDict:(id)arg0 ;
-(id)evalNSObjectV:(id)arg0 ;
-(id)evalString:(id)arg0 ;
-(id)getPropertyList;
-(id)initWithModelPath:(id)arg0 withConfiguration:(id)arg1 ;
-(id)initWithModelPath:(id)arg0 withPropertyListPath:(id)arg1 ;
-(void)boundResult:(id)arg0 ;
-(void)initializeModel:(id)arg0 withConfiguration:(id)arg1 ;
-(void)setCPMLAlgorithm:(id)arg0 ;
-(void)setCPMLAlgorithmEngine:(id)arg0 ;
-(void)setDispatchQueue:(id)arg0 ;


@end


#endif