// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADTEXTLISTSTYLE_H
#define OADTEXTLISTSTYLE_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface OADTextListStyle : NSObject {
    NSMutableArray *mParagraphProperties;
}


@property (retain, nonatomic) NSString *language; // ivar: mLanguage


+(id)defaultObject;
-(id)defaultProperties;
-(id)description;
-(id)init;
-(id)initWithDefaults;
-(id)propertiesForListLevel:(NSUInteger)arg0 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg0 ;
-(void)enumerateParagraphPropertiesUsingBlock:(id)arg0 ;
-(void)flatten;
-(void)overrideWithTextStyle:(id)arg0 ;
-(void)removeUnnecessaryOverrides;
-(void)setParentTextListStyle:(id)arg0 ;
-(void)setPropertiesForListLevel:(NSUInteger)arg0 properties:(id)arg1 ;


@end


#endif