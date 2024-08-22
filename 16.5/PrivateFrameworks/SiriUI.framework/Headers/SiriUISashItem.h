// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIUISASHITEM_H
#define SIRIUISASHITEM_H

@class SiriSharedUISashItem;



@interface SiriUISashItem : SiriSharedUISashItem {
    BOOL _canPunchout;
}


@property (nonatomic, setter=_setDefault:) BOOL isDefault; // ivar: _isDefault


+(id)_languageCode;
+(id)defaultSashItem;
+(void)_setLanguageCode:(id)arg0 ;
-(BOOL)canPunchout;
-(id)initWithExtension:(id)arg0 ;
-(void)setImage:(id)arg0 ;
-(void)setTitle:(id)arg0 ;


@end


#endif