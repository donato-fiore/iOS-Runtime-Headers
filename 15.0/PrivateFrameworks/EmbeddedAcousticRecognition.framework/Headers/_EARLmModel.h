// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EARLMMODEL_H
#define _EARLMMODEL_H


#import <Foundation/Foundation.h>


@interface _EARLmModel : NSObject

@property (readonly, nonatomic) shared_ptr<quasar::LmBuildConfig> buildConfig; // ivar: _buildConfig
@property (readonly, nonatomic) shared_ptr<quasar::LmModel2> model; // ivar: _model


+(void)initialize;
+(void)removeWithDirectory:(id)arg0 ;
-(?)_initWithModel;
-(BOOL)trainWithData:(id)arg0 ;
-(BOOL)trainWithData:(id)arg0 shouldStop:(id)arg1 ;
-(BOOL)writeToDirectory:(id)arg0 ;
-(CGFloat)age;
-(float)weight;
-(id)deserializeModelData:(id)arg0 ;
-(id)handle;
-(id)initFromDirectory:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 root:(id)arg1 ;
-(id)metrics;
-(id)serializedModelWithLanguage:(id)arg0 modelData:(id)arg1 oovs:(id)arg2 ;
-(void)setWeight:(float)arg0 ;


@end


#endif