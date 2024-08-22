// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDRUN_H
#define EDRUN_H

@class NSArray, NSString;
@protocol EDKeyedObject;

#import <Foundation/Foundation.h>

#import "EDResources.h"

@interface EDRun : NSObject <EDKeyedObject>

 {
    EDResources *mResources;
    NSUInteger mCharIndex;
    NSUInteger mFontIndex;
    NSArray *mEffects;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)runWithCharIndex:(NSUInteger)arg0 font:(id)arg1 effects:(id)arg2 resources:(id)arg3 ;
+(id)runWithCharIndex:(NSUInteger)arg0 font:(id)arg1 resources:(id)arg2 ;
+(id)runWithCharIndex:(NSUInteger)arg0 fontIndex:(NSUInteger)arg1 effects:(id)arg2 resources:(id)arg3 ;
+(id)runWithCharIndex:(NSUInteger)arg0 fontIndex:(NSUInteger)arg1 resources:(id)arg2 ;
+(id)runWithResources:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRun:(id)arg0 ;
-(NSInteger)key;
-(NSUInteger)charIndex;
-(NSUInteger)fontIndex;
-(id)effects;
-(id)font;
-(id)initWithCharIndex:(NSUInteger)arg0 font:(id)arg1 effects:(id)arg2 resources:(id)arg3 ;
-(id)initWithCharIndex:(NSUInteger)arg0 font:(id)arg1 resources:(id)arg2 ;
-(id)initWithCharIndex:(NSUInteger)arg0 fontIndex:(NSUInteger)arg1 effects:(id)arg2 resources:(id)arg3 ;
-(id)initWithCharIndex:(NSUInteger)arg0 fontIndex:(NSUInteger)arg1 resources:(id)arg2 ;
-(id)initWithResources:(id)arg0 ;
-(void)adjustIndex:(NSUInteger)arg0 ;
-(void)overrideFont:(id)arg0 ;
-(void)setCharIndex:(NSUInteger)arg0 ;
-(void)setFont:(id)arg0 ;
-(void)setFontIndex:(NSUInteger)arg0 ;


@end


#endif