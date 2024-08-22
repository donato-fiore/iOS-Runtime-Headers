// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROTITLECOLORCONFIGURATION_H
#define MIROTITLECOLORCONFIGURATION_H

@class NSString, NSDictionary;
@protocol MiroTitleColorConfiguration;


#import "MiroColorConfiguration.h"

@interface MiroTitleColorConfiguration : MiroColorConfiguration <MiroTitleColorConfiguration>



@property (readonly, nonatomic) NSUInteger backgroundShapeColorTreatment;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *debugTitleName; // ivar: _debugTitleName
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int snapshotAspect; // ivar: _snapshotAspect
@property (readonly, nonatomic) NSUInteger subtitleColorTreatment;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger titleColorTreatment;
@property (retain, nonatomic) NSDictionary *titleParameters; // ivar: _titleParameters
@property (readonly, nonatomic) BOOL titleStyleHasColorRigging;
@property (readonly, nonatomic) BOOL titleStyleHasStrap;
@property (readonly, nonatomic) BOOL titleStyleIsCentered;
@property (readonly, nonatomic) BOOL titleStyleIsLowerThird;
@property (readonly, nonatomic) BOOL titleStyleIsSideBySide;


+(id)titleColorConfigurationWithTitleStyleID:(id)arg0 snapshotAspect:(int)arg1 randomizerSeed:(unsigned int)arg2 ;
+(void)initialize;
-(BOOL)_verifyTitleStylesAreCorrect:(id)arg0 ;
-(id)initWithTitleStyleID:(id)arg0 randomizerSeed:(unsigned int)arg1 ;


@end


#endif