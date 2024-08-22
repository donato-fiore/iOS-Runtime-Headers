// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TDEFFECTSTYLEPRODUCTION_H
#define TDEFFECTSTYLEPRODUCTION_H



#import "TDElementProduction.h"

@interface TDEffectStyleProduction : TDElementProduction



-(id)associatedFileModificationDateWithDocument:(id)arg0 ;
-(id)displayName;
-(void)deleteRenditionsInDocument:(id)arg0 shouldDeleteAssetFiles:(BOOL)arg1 ;
-(void)generateRenditionsWithDocument:(id)arg0 ;


@end


#endif