// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KNSLIDENUMBERPLACEHOLDERINFO_H
#define KNSLIDENUMBERPLACEHOLDERINFO_H



#import "KNPlaceholderInfo.h"

@interface KNSlideNumberPlaceholderInfo : KNPlaceholderInfo



+(BOOL)wantsTitleAndCaptionUUIDs;
-(BOOL)allowsCaption;
-(BOOL)allowsTitle;
-(BOOL)isSelectable;
-(Class)layoutClass;
-(Class)repClass;
-(id)copyToInstantiateMasterPlaceholder;
-(id)instructionalText;
-(id)textureDeliveryStylesLocalized:(BOOL)arg0 animationFilter:(id)arg1 ;
-(id)typeName;
-(int)kind;
-(void)acceptVisitor:(id)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;


@end


#endif