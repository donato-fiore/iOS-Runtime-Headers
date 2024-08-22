// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VTVECTOR_H
#define VTVECTOR_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface vtVector : NSObject

@property (retain) NSMutableArray *vVectorData; // ivar: _vVectorData
@property unsigned int vVectorElements; // ivar: _vVectorElements


-(id)init;
-(int)addElement:(id)arg0 ;


@end


#endif