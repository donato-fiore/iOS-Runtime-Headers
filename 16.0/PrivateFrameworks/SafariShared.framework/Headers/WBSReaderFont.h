// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSREADERFONT_H
#define WBSREADERFONT_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WBSReaderFont : NSObject <NSCopying>

 {
    NSString *_displayName;
    NSString *_localizedName;
    BOOL _hasCalculatedLocalizedName;
}


@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *familyName; // ivar: _familyName
@property (readonly, nonatomic) NSString *familyNameForWebContent;
@property (readonly, nonatomic, getter=isInstalled) BOOL installed;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)fontWithFamilyName:(id)arg0 displayName:(id)arg1 ;
+(id)systemFont;
+(id)systemFontWithDisplayName:(id)arg0 ;
+(id)systemSerifFont;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithFamilyName:(id)arg0 displayName:(id)arg1 type:(NSInteger)arg2 ;
-(id)_localizedName;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(struct RetainPtr<const __CTFontDescriptor *> )_fontDescriptorRefForFontFamilyName:(id)arg0 restrictToEnabled:(BOOL)arg1 ;


@end


#endif