// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PADMODELLOADER_H
#define PADMODELLOADER_H


#import <Foundation/Foundation.h>

#import "PADVNFacePoseModel.h"
#import "PADVNPrintReplayS2Model.h"

@interface PADModelLoader : NSObject

@property (readonly, nonatomic) PADVNFacePoseModel *facePoseModel; // ivar: _facePoseModel
@property (readonly, nonatomic) PADVNPrintReplayS2Model *printReplayS2Model; // ivar: _printReplayS2Model


-(id)initWithCompletion:(id)arg0 ;
-(void)dealloc;


@end


#endif