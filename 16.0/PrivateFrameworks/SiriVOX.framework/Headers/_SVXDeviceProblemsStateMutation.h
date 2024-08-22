// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SVXDEVICEPROBLEMSSTATEMUTATION_H
#define _SVXDEVICEPROBLEMSSTATEMUTATION_H

@class NSString;
@protocol SVXDeviceProblemsStateMutating;

#import <Foundation/Foundation.h>

#import "SVXDeviceProblemsState.h"

@interface _SVXDeviceProblemsStateMutation : NSObject <SVXDeviceProblemsStateMutating>

 {
    SVXDeviceProblemsState *_baseModel;
    BOOL _isFixingProblems;
    NSUInteger _problems;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setIsFixingProblems:(BOOL)arg0 ;
-(void)setProblems:(NSUInteger)arg0 ;


@end


#endif