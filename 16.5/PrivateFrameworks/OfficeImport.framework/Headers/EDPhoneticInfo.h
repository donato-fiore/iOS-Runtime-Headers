// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDPHONETICINFO_H
#define EDPHONETICINFO_H

@class NSString;
@protocol NSCopying, EDImmutableObject;

#import <Foundation/Foundation.h>

#import "EDResources.h"
#import "EDCollection.h"

@interface EDPhoneticInfo : NSObject <NSCopying, EDImmutableObject>

 {
    EDResources *mResources;
    NSUInteger mFontIndex;
    NSString *mString;
    int mType;
    int mAlign;
    EDCollection *mRuns;
    BOOL mDoNotModify;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)phoneticInfoWithResources:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEDPhoneticInfo:(id)arg0 ;
-(NSUInteger)fontIndex;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)font;
-(id)initWithResources:(id)arg0 ;
-(id)runs;
-(id)string;
-(int)align;
-(int)type;
-(void)appendString:(id)arg0 ;
-(void)prependString:(id)arg0 ;
-(void)setAlign:(int)arg0 ;
-(void)setDoNotModify:(BOOL)arg0 ;
-(void)setFont:(id)arg0 ;
-(void)setFontIndex:(NSUInteger)arg0 ;
-(void)setString:(id)arg0 ;
-(void)setType:(int)arg0 ;


@end


#endif