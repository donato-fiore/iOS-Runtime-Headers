// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCC15FOCUSSETTINGSUI23ACTIVITYCONFIGVIEWMODELP33_69469D27B0511CD91350E3DC9D01628B22POSTERSDELEGATEHANDLER_H
#define _TTCC15FOCUSSETTINGSUI23ACTIVITYCONFIGVIEWMODELP33_69469D27B0511CD91350E3DC9D01628B22POSTERSDELEGATEHANDLER_H

@protocol PRUIModalControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtCC15FocusSettingsUI23ActivityConfigViewModelP33_69469D27B0511CD91350E3DC9D01628B22PostersDelegateHandler : NSObject <PRUIModalControllerDelegate>

 {
    ? modalControllerWillDismissHandler;
    ? modalControllerDidDismissHandler;
}




-(id)init;
-(void)modalController:(id)arg0 didDismissSheetWithResponse:(id)arg1 ;
-(void)modalController:(id)arg0 willDismissSheetWithResponse:(id)arg1 ;


@end


#endif