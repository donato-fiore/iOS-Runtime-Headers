// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKEXPERIMENT_H
#define PKEXPERIMENT_H

@class TRIClient;

#import <Foundation/Foundation.h>


@interface PKExperiment : NSObject {
    TRIClient *_trialClient;
}


@property (readonly, nonatomic) BOOL isExposed; // ivar: _isExposed


-(BOOL)booleanForFactor:(id)arg0 ;
-(BOOL)isTaggedForFactor:(id)arg0 ;
-(id)description;
-(id)experimentDetails;
-(id)filePathForFactor:(id)arg0 ;
-(id)init;
-(id)initWithClient:(id)arg0 ;
-(id)levelForFactor:(id)arg0 ;
-(id)metadataForFactor:(id)arg0 ;
-(id)namespaceName;
-(id)stringForFactor:(id)arg0 ;
-(void)refresh;
-(void)trackExperimentExposure;


@end


#endif