// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUSLIDESHOWSETTINGSVIEWMODEL_H
#define PUSLIDESHOWSETTINGSVIEWMODEL_H

@class OKProducerPreset, NSDictionary;


#import "PUViewModel.h"
#import "PUSlideshowMediaItem.h"

@interface PUSlideshowSettingsViewModel : PUViewModel

@property (retain, nonatomic) PUSlideshowMediaItem *mediaItem; // ivar: _mediaItem
@property (nonatomic, getter=isMusicOn) BOOL musicOn; // ivar: _musicOn
@property (retain, nonatomic) OKProducerPreset *preset; // ivar: _preset
@property (readonly, nonatomic) NSDictionary *propertyDictionary;
@property (nonatomic) BOOL shouldRepeat; // ivar: _shouldRepeat
@property (nonatomic) CGFloat stepDuration; // ivar: _stepDuration


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currentChange;
-(id)initWithPropertyDictionary:(id)arg0 ;
-(id)newViewModelChange;
-(void)registerChangeObserver:(id)arg0 ;
-(void)unregisterChangeObserver:(id)arg0 ;


@end


#endif