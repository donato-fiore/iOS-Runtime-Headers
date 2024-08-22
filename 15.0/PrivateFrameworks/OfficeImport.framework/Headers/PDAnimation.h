// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDANIMATION_H
#define PDANIMATION_H


#import <Foundation/Foundation.h>

#import "PDRootTimeNode.h"
#import "OITSUNoCopyDictionary.h"

@interface PDAnimation : NSObject {
    PDRootTimeNode *mRootTimeNode;
    OITSUNoCopyDictionary *mBuildMap;
}




+(id)entranceSubTypeMap;
+(id)exitSubTypeMap;
-(id)addRootTimeNode;
-(id)buildMap;
-(id)description;
-(id)init;
-(id)rootTimeNode;
-(void)setBuildMap:(id)arg0 ;


@end


#endif