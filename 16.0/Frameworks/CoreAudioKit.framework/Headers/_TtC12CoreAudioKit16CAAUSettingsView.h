// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12COREAUDIOKIT16CAAUSETTINGSVIEW_H
#define _TTC12COREAUDIOKIT16CAAUSETTINGSVIEW_H

@class UIView, AUAudioUnit;



@interface _TtC12CoreAudioKit16CAAUSettingsView : UIView {
    ? bandSelector;
    ? genericView;
    ? selectedBand;
}


@property (nonatomic, retain) AUAudioUnit *au; // ivar: au


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif