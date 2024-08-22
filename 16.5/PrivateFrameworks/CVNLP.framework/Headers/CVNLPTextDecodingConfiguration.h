// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CVNLPTEXTDECODINGCONFIGURATION_H
#define CVNLPTEXTDECODINGCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface CVNLPTextDecodingConfiguration : NSObject

@property (nonatomic) id *commitActionBlock; // ivar: _commitActionBlock


+(id)defaultCharacterCommitActionBehavior:(SEL)arg0 ;
+(id)defaultCommitActionBehaviorForLocale:(SEL)arg0 ;
+(id)defaultWhitespaceCommitActionBehavior:(SEL)arg0 ;
-(id)initWithCommitActionBehavior:(id)arg0 ;


@end


#endif