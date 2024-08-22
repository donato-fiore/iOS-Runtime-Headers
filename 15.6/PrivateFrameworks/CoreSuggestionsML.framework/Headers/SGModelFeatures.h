// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGMODELFEATURES_H
#define SGMODELFEATURES_H

@class PMLSparseVector;

#import <Foundation/Foundation.h>

#import "SGModelSource.h"

@interface SGModelFeatures : NSObject {
    SGModelSource *_source;
    PMLSparseVector *_vector;
}




-(id)initWithSource:(id)arg0 vector:(id)arg1 ;
-(id)sessionDescriptor;
-(id)source;
-(id)vector;


@end


#endif