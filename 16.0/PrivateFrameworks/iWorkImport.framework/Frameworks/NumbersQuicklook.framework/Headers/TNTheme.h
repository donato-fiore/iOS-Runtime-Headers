// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TNTHEME_H
#define TNTHEME_H

@class TSATheme, NSArray;



@interface TNTheme : TSATheme {
    NSArray *mTablePrototypes;
}


@property (retain, nonatomic) NSArray *tablePrototypes;


+(void)initialize;
-(void)bootstrapBlackHardCodedTheme;
-(void)bootstrapWhiteHardCodedTheme;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_initDefaultHardCodedStyles;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif