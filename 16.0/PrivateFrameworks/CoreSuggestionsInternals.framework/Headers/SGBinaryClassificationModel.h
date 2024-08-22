// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGBINARYCLASSIFICATIONMODEL_H
#define SGBINARYCLASSIFICATIONMODEL_H

@class NSString;
@protocol PMLPlistAndChunksSerializableProtocol, PMLMultiLabelClassifierProtocol><PMLPlistAndChunksSerializableProtocol;


#import "SGModel.h"

@interface SGBinaryClassificationModel : SGModel <PMLPlistAndChunksSerializableProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<PMLMultiLabelClassifierProtocol><PMLPlistAndChunksSerializableProtocol> *model;
@property (readonly) Class superclass;
@property (readonly) CGFloat threshold; // ivar: _threshold


+(id)modelForPath:(id)arg0 modelClass:(Class)arg1 ;
+(id)modelFromMobileAssetForEntity:(id)arg0 type:(id)arg1 language:(id)arg2 class:(Class)arg3 ;
+(id)modelFromMobileAssetForName:(id)arg0 language:(id)arg1 ;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)predictLabelForInput:(id)arg0 ;
-(id)serialize;
-(id)toPlistWithChunks:(id)arg0 ;


@end


#endif