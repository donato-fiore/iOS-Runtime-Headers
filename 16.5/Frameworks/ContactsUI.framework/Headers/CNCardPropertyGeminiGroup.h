// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCARDPROPERTYGEMINIGROUP_H
#define CNCARDPROPERTYGEMINIGROUP_H



#import "CNCardPropertyGroup.h"

@interface CNCardPropertyGeminiGroup : CNCardPropertyGroup

@property (nonatomic) BOOL shouldShowGemini; // ivar: _shouldShowGemini


-(id)_loadPropertyItems;
-(id)displayItems;
-(id)editingItems;
-(void)setGeminiResult:(id)arg0 ;


@end


#endif