// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHASSETTRANSLATOR_H
#define PGGRAPHASSETTRANSLATOR_H



#import "PGGraphEntityTranslator.h"

@interface PGGraphAssetTranslator : PGGraphEntityTranslator



+(id)entityClassName;
-(id)graphChangesForChangedPropertyNamesByLocalIdentifier:(id)arg0 change:(id)arg1 progressBlock:(id)arg2 ;
-(id)highlightUpdateTypeByAssetProperty;
-(id)momentUpdateTypeByAssetProperty;


@end


#endif