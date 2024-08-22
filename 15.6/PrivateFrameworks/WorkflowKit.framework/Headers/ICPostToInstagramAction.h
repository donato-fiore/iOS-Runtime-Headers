// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICPOSTTOINSTAGRAMACTION_H
#define ICPOSTTOINSTAGRAMACTION_H

@class WFFileRepresentation;


#import "ICDocumentAction.h"

@interface ICPostToInstagramAction : ICDocumentAction

@property (retain, nonatomic) WFFileRepresentation *instagramRepresentation; // ivar: _instagramRepresentation


-(id)inputContentClasses;
-(void)appDidResume:(id)arg0 ;
-(void)dealloc;
// -(void)performActionWithInput:(id)arg0 parameters:(id)arg1 userInterface:(id)arg2 successHandler:(id)arg3 errorHandler:(unk)arg4  ;
// -(void)shareAsALAssetWithItem:(id)arg0 caption:(id)arg1 userInterface:(id)arg2 successHandler:(id)arg3 errorHandler:(unk)arg4  ;
// -(void)shareAsImageFileWithItem:(id)arg0 caption:(id)arg1 userInterface:(id)arg2 successHandler:(id)arg3 errorHandler:(unk)arg4  ;


@end


#endif