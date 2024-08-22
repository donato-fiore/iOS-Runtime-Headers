// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EARNGRAMLMMODEL_H
#define _EARNGRAMLMMODEL_H

@class EARLmModel, NSString;



@interface _EARNgramLmModel : EARLmModel

@property (readonly, nonatomic) NSString *arpaFileName;
@property (readonly, nonatomic) shared_ptr<quasar::NgramFstConfig> ngramBuildConfig; // ivar: _ngramBuildConfig
@property (readonly, nonatomic) shared_ptr<quasar::NgramLmModel2> ngramModel; // ivar: _ngramModel


+(void)initialize;
-(?)_initWithModelconfig;
-(BOOL)writeToDirectory:(id)arg0 ;
-(id)generateNgramCounts:(id)arg0 ;
-(id)initFromDirectory:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 root:(id)arg1 ;


@end


#endif