// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WMSTYLE_H
#define WMSTYLE_H



#import "CMStyle.h"

@interface WMStyle : CMStyle



-(id)cssStyleString;
-(id)initWithWDCharacterProperties:(id)arg0 ;
-(id)initWithWDStyle:(id)arg0 ;
-(id)initWithWDStyle:(id)arg0 isInTextFrame:(BOOL)arg1 ;
-(id)initWithWMStyle:(id)arg0 ;
-(void)ResoveInterPropertyDependencies;
-(void)addCharacterProperties:(id)arg0 ;
-(void)cascadeWithStyle:(id)arg0 ;


@end


#endif