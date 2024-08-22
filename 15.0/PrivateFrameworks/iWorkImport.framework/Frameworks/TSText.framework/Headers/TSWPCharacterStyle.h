// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPCHARACTERSTYLE_H
#define TSWPCHARACTERSTYLE_H

@class TSSStyle, NSString;
@protocol TSSPreset;



@interface TSWPCharacterStyle : TSSStyle <TSSPreset>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *presetKind;
@property (readonly) Class superclass;


+(id)emphasisProperties;
+(id)nonEmphasisCharacterProperties;
+(id)nullStyleName;
+(id)nullStyleWithContext:(id)arg0 ;
+(id)properties;
+(id)propertiesAllowingNSNull;
-(BOOL)transformsFontSizes;
-(id)archivableRepresentationOfChangeSet:(id)arg0 ;
-(int)writingDirection;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif