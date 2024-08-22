// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PADMODELLOADER_H
#define _PADMODELLOADER_H

@class NSString;
@protocol PADModelLoader;

#import <Foundation/Foundation.h>

#import "PADVNFacePoseModel.h"
#import "PADVNPrintReplayS2Model.h"

@interface _PADModelLoader : NSObject <PADModelLoader>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PADVNFacePoseModel *facePoseModel; // ivar: _facePoseModel
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PADVNPrintReplayS2Model *printReplayS2Model; // ivar: _printReplayS2Model
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif