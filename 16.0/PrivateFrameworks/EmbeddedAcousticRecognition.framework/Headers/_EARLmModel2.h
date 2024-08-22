// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EARLMMODEL2_H
#define _EARLMMODEL2_H

@class EARLmHandle;



@interface _EARLmModel2 : EARLmHandle

@property (readonly, nonatomic) shared_ptr<quasar::LmModel2> model; // ivar: _model


+(id)deserializeModelData:(id)arg0 ;
+(void)initialize;
-(?)_initWithModel;
-(BOOL)writeToDirectory:(id)arg0 ;
-(CGFloat)age;
-(float)weight;
-(id)metrics;
-(id)serializedModelWithLanguage:(id)arg0 modelData:(id)arg1 oovs:(id)arg2 ;
-(void)setProtectionClass:(id)arg0 ;
-(void)setWeight:(float)arg0 ;


@end


#endif