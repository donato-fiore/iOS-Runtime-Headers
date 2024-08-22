// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CUIEXTERNALLINKRENDITION_H
#define _CUIEXTERNALLINKRENDITION_H

@class NSString, NSMutableSet;


#import "CUIThemeRendition.h"

@interface _CUIExternalLinkRendition : CUIThemeRendition {
    NSString *_assetPackIdentifier;
    NSMutableSet *_externalTags;
}




-(id)_initWithCSIHeader:(struct _csiheader *)arg0 ;
-(id)assetPackIdentifier;
-(id)externalTags;
-(id)initWithCSIData:(id)arg0 forKey:(struct _renditionkeytoken *)arg1 ;
-(void)dealloc;


@end


#endif