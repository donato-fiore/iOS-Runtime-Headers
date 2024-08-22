// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDSTRING_H
#define EDSTRING_H

@class NSString;
@protocol NSCopying, EDImmutableObject;

#import <Foundation/Foundation.h>

#import "EDRunsCollection.h"
#import "EDPhoneticInfo.h"

@interface EDString : NSObject <NSCopying, EDImmutableObject>

 {
    NSString *mString;
    EDRunsCollection *mRuns;
    EDPhoneticInfo *mPhoneticInfo;
    BOOL mDoNotModify;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)edStringWithString:(id)arg0 ;
+(id)edStringWithString:(id)arg0 runs:(id)arg1 ;
+(id)string;
-(BOOL)areThereRuns;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEDString:(id)arg0 ;
-(BOOL)isEqualToString:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)firstFont;
-(id)firstRunEffects;
-(id)firstRunFont;
-(id)init;
-(id)initWithString:(id)arg0 ;
-(id)initWithString:(id)arg0 runs:(id)arg1 ;
-(id)phoneticInfo;
-(id)runs;
-(id)string;
-(void)appendString:(id)arg0 ;
-(void)prependString:(id)arg0 ;
-(void)removeCharacterAtIndex:(NSUInteger)arg0 ;
-(void)removeCharactersInSet:(id)arg0 ;
-(void)setDoNotModify:(BOOL)arg0 ;
-(void)setPhoneticInfo:(id)arg0 ;
-(void)setRuns:(id)arg0 ;
-(void)setString:(id)arg0 ;


@end


#endif