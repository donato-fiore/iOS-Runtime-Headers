// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSDESPLUGIN_H
#define PSDESPLUGIN_H

@class NSString;
@protocol DESRecipeEvaluation, _DKKnowledgeQuerying;

#import <Foundation/Foundation.h>


@interface PSDESPlugin : NSObject <DESRecipeEvaluation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<_DKKnowledgeQuerying> *knowledgeStore; // ivar: _knowledgeStore
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)shouldDownloadAttachmentWithURL:(id)arg0 recipe:(id)arg1 recordInfo:(id)arg2 ;
-(void)performEvaluation:(id)arg0 ;


@end


#endif