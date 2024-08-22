// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef THEME_H
#define THEME_H

@class NSString, UIImage;

#import <Foundation/Foundation.h>


@interface Theme : NSObject

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) UIImage *previewImage;
@property (readonly, nonatomic) NSString *themeID; // ivar: m_themeID
@property (readonly, nonatomic) NSString *trailerID;


+(BOOL)themeIDIsTrailer:(id)arg0 ;
+(id)themeIDFromTrailerID:(id)arg0 ;
+(id)themeWithID:(id)arg0 ;
+(id)trailerIDFromThemeID:(id)arg0 ;
-(id)displayNameForTransitionName:(id)arg0 ;
-(id)initWithThemeID:(id)arg0 ;
-(id)micaFileBaseName;
-(id)micaFileNameForCutawayName:(id)arg0 cutawayDirection:(int)arg1 ;
-(id)micaFileNameForTitleNamed:(id)arg0 ;
-(id)micaFileNameForTransitionName:(id)arg0 transitionDirection:(int)arg1 ;
-(id)musicName;
-(id)posterImage;


@end


#endif