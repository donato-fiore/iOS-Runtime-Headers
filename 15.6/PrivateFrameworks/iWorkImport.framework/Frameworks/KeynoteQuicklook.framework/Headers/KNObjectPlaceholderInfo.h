// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KNOBJECTPLACEHOLDERINFO_H
#define KNOBJECTPLACEHOLDERINFO_H



#import "KNPlaceholderInfo.h"

@interface KNObjectPlaceholderInfo : KNPlaceholderInfo



-(BOOL)canAddCaption;
-(BOOL)canAddTitle;
-(BOOL)canRemoveCaption;
-(BOOL)canRemoveTitle;
-(BOOL)displaysInstructionalText;
-(BOOL)supportsHyperlinks;
-(Class)layoutClass;
-(Class)repClass;
-(id)initWithKNPlaceholderInfo:(id)arg0 ;
-(id)instructionalText;
-(id)typeName;
-(int)kind;


@end


#endif