// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIROLLOUTDEPLOYMENTREFSTORE_H
#define TRIROLLOUTDEPLOYMENTREFSTORE_H

@protocol TRIPathReferencing;

#import <Foundation/Foundation.h>

#import "TRIServerContext.h"

@interface TRIRolloutDeploymentRefStore : NSObject <TRIPathReferencing>

 {
    TRIServerContext *_context;
}




-(BOOL)hasReferenceToPath:(id)arg0 ;
-(id)initWithServerContext:(id)arg0 ;


@end


#endif