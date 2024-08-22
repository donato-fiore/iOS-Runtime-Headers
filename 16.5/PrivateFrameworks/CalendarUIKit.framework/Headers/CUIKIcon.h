// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIKICON_H
#define CUIKICON_H

@class ISIcon, NSCalendar, NSDateComponents;
@protocol CUIKIconGenerator;



@interface CUIKIcon : ISIcon

@property (readonly, copy, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (readonly, copy, nonatomic) NSDateComponents *dateComponents; // ivar: _dateComponents
@property (readonly, nonatomic) NSInteger format; // ivar: _format
@property (readonly, nonatomic) NSObject<CUIKIconGenerator> *iconGenerator; // ivar: _iconGenerator


-(id)imageForImageDescriptor:(id)arg0 ;
-(id)initWithDate:(id)arg0 calendar:(id)arg1 format:(NSInteger)arg2 ;
-(id)initWithDateComponents:(id)arg0 calendar:(id)arg1 format:(NSInteger)arg2 forceNoTextEffects:(BOOL)arg3 ;
-(struct CGImage *)CGImageForImageDescriptor:(id)arg0 ;
-(void)getCGImageForImageDescriptor:(id)arg0 completion:(id)arg1 ;
-(void)getImageForImageDescriptor:(id)arg0 completion:(id)arg1 ;
-(void)prepareImagesForImageDescriptors:(id)arg0 ;


@end


#endif