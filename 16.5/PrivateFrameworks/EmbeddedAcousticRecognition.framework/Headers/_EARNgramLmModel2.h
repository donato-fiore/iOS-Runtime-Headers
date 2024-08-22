// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EARNGRAMLMMODEL2_H
#define _EARNGRAMLMMODEL2_H

@class EARLmModel2, NSString;



@interface _EARNgramLmModel2 : EARLmModel2

@property (readonly, nonatomic) NSString *arpaFileName;
@property (readonly, nonatomic) shared_ptr<quasar::NgramLmModel2> ngramModel; // ivar: _ngramModel


+(void)initialize;
-(?)_initWithModel;
-(BOOL)writeToDirectory:(id)arg0 ;
-(void)setProtectionClass:(id)arg0 ;


@end


#endif