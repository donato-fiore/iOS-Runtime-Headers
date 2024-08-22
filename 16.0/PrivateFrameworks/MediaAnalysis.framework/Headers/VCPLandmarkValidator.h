// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPLANDMARKVALIDATOR_H
#define VCPLANDMARKVALIDATOR_H


#import <Foundation/Foundation.h>

#import "VCPCNNModel.h"
#import "VCPCNNData.h"

@interface VCPLandmarkValidator : NSObject {
    VCPCNNModel *_model;
    VCPCNNData *_input;
    *float _transArray;
    *float _meanLandmarkLoc;
    char * _triIndexMap;
    unsigned char _numTri;
    char * _triList;
}


@property *float orientation; // ivar: _orientation


-(id)initWithModelFile:(id)arg0 paramFile:(struct __sFILE *)arg1 numTri:(unsigned char)arg2 triList:(char *)arg3 angle:(*float)arg4 ;
-(int)validateOneImage:(struct __CVBuffer *)arg0 landmarks:(*float)arg1 numofLandmarks:(int)arg2 score:(*float)arg3 ;
-(void)dealloc;


@end


#endif