// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDMATH_H
#define WDMATH_H

@class NSString;


#import "WDRun.h"
#import "WDCharacterProperties.h"

@interface WDMath : WDRun

@property (nonatomic) int justification; // ivar: _justification
@property (retain, nonatomic) WDCharacterProperties *properties; // ivar: _properties
@property (readonly, nonatomic) NSString *xmlBlob; // ivar: _xmlBlob


-(id)description;
-(id)initWithParagraph:(id)arg0 xmlBlob:(id)arg1 ;
-(int)runType;
-(void)clearProperties;


@end


#endif