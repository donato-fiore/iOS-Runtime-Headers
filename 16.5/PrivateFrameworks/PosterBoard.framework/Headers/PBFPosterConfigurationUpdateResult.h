// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFPOSTERCONFIGURATIONUPDATERESULT_H
#define PBFPOSTERCONFIGURATIONUPDATERESULT_H

@class PRIncomingPosterConfiguration, NSArray;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface PBFPosterConfigurationUpdateResult : NSObject {
    id<BSInvalidatable> *_pathValidityExtension;
    id<BSInvalidatable> *_assocPathValidityExtension;
}


@property (readonly, nonatomic) PRIncomingPosterConfiguration *incomingAssocPosterConfiguration; // ivar: _incomingAssocPosterConfiguration
@property (readonly, nonatomic) PRIncomingPosterConfiguration *incomingPosterConfiguration; // ivar: _incomingPosterConfiguration
@property (readonly, nonatomic) NSArray *postersToDelete; // ivar: _postersToDelete


-(id)initWithIncomingPosterConfiguration:(id)arg0 incomingAssocPosterConfiguration:(id)arg1 postersToDelete:(id)arg2 ;
-(void)dealloc;


@end


#endif