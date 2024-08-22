// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SCNEXPORTOPERATION_H
#define _SCNEXPORTOPERATION_H

@class NSDictionary, NSError, NSURL;


#import "SCNExportOperation.h"
#import "SCNNode.h"
#import "SCNRenderer.h"
#import "SCNScene.h"

@interface _SCNExportOperation : SCNExportOperation {
    CGFloat _systemTime;
}


@property (nonatomic) NSUInteger antialiasingMode; // ivar: _antialiasingMode
@property (retain, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (nonatomic) BOOL canceled; // ivar: _canceled
@property (nonatomic) id *delegate; // ivar: _delegate
@property (nonatomic) SEL didEndSelector; // ivar: _didEndSelector
@property (nonatomic) CGFloat endTime; // ivar: _endTime
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSURL *outputURL; // ivar: _outputURL
@property (retain, nonatomic) SCNNode *pointOfView; // ivar: _pointOfView
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (retain, nonatomic) SCNRenderer *renderer; // ivar: _renderer
@property (retain, nonatomic) SCNScene *scene; // ivar: _scene
@property (nonatomic) CGSize size; // ivar: _size
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (nonatomic) BOOL succeded; // ivar: _succeded
@property (nonatomic) *void userInfo; // ivar: _userInfo


-(void)cancel;
-(void)dealloc;


@end


#endif