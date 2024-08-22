// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSEARCHRESULT_COMPATIBILITY_H
#define SFSEARCHRESULT_COMPATIBILITY_H

@class SpotlightExtras, NSString;



@interface SFSearchResult_Compatibility : SpotlightExtras

@property (retain, nonatomic) NSString *compatibilityTitle;
@property (retain, nonatomic) NSString *externalIdentifier;
@property (retain, nonatomic) NSString *resultIdentifier;


-(BOOL)isQuickGlance;
-(Class)classForCoder;
-(Class)classForKeyedArchiver;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)section_header;
-(id)simpleTitle;
-(id)uniqueIdentifier;
-(void)setSimpleTitle:(id)arg0 ;
-(void)setUniqueIdentifier:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif