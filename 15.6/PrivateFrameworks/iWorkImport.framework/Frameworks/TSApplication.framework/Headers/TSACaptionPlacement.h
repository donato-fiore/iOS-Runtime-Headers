// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSACAPTIONPLACEMENT_H
#define TSACAPTIONPLACEMENT_H

@class TSPObject;



@interface TSACaptionPlacement : TSPObject

@property (nonatomic) NSInteger captionAnchorLocation; // ivar: _captionAnchorLocation
@property (nonatomic) NSInteger drawableAnchorLocation; // ivar: _drawableAnchorLocation


+(BOOL)needsObjectUUID;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCaptionPlacement:(id)arg0 ;
-(id)copyWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 drawableAnchorLocation:(NSInteger)arg1 captionAnchorLocation:(NSInteger)arg2 ;
-(void)loadFromMessage:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)saveToMessage:(*void)arg0 archiver:(id)arg1 ;


@end


#endif