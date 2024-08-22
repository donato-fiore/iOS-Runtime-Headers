// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDANNOTATION_H
#define WDANNOTATION_H



#import "WDRun.h"
#import "WDCharacterRun.h"
#import "WDAnnotationData.h"
#import "WDAnnotation.h"

@interface WDAnnotation : WDRun {
    int mType;
    WDCharacterRun *mReference;
    BOOL mReferencePopertiesFixed;
    WDAnnotationData *mData;
    WDAnnotation *mOtherEndOfRangedAnnotation;
}


@property BOOL isResolved; // ivar: isResolved
@property WDAnnotation *parent; // ivar: parent


-(BOOL)referencePropertiesFixed;
-(NSUInteger)lastParagraphId;
-(id)data;
-(id)date;
-(id)description;
-(id)initWithParagraph:(id)arg0 type:(int)arg1 ;
-(id)otherEndOfRangedAnnotation;
-(id)owner;
-(id)paragraphIds;
-(id)reference;
-(id)text;
-(int)annotationType;
-(int)runType;
-(void)setDate:(id)arg0 ;
-(void)setOtherEndOfRangedAnnotation:(id)arg0 ;
-(void)setOwner:(id)arg0 ;
-(void)setReferencePropertiesFixed;
-(void)useDataFromOtherEnd;


@end


#endif