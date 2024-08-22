// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADTABLEBACKGROUND_H
#define OADTABLEBACKGROUND_H

@class NSArray, NSString;
@protocol OADEffectsParent;

#import <Foundation/Foundation.h>

#import "OADFill.h"

@interface OADTableBackground : NSObject <OADEffectsParent>

 {
    OADFill *mFill;
    NSArray *mEffects;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasEffects;
-(id)effects;
-(id)fill;
-(void)setEffects:(id)arg0 ;
-(void)setFill:(id)arg0 ;


@end


#endif