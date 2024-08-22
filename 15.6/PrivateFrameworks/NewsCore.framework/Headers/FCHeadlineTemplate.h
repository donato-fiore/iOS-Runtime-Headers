// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCHEADLINETEMPLATE_H
#define FCHEADLINETEMPLATE_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "FCColor.h"
#import "FCTextInfo.h"

@interface FCHeadlineTemplate : NSObject <NSCopying>



@property (copy, nonatomic) FCColor *backgroundColor; // ivar: _backgroundColor
@property (copy, nonatomic) FCTextInfo *headlineBylineTextInfo; // ivar: _headlineBylineTextInfo
@property (copy, nonatomic) FCTextInfo *headlineExcerptTextInfo; // ivar: _headlineExcerptTextInfo
@property (copy, nonatomic) FCTextInfo *headlineTitleTextInfo; // ivar: _headlineTitleTextInfo
@property (copy, nonatomic) NSArray *loadableFonts; // ivar: _loadableFonts


+(id)_defaultBackgroundColor;
+(id)_defaultTitleTextColor;
+(id)_headlineTemplateWithJSON:(id)arg0 versionNumber:(id)arg1 ;
+(id)headlineTemplateWithJSON:(id)arg0 ;
+(id)templateByMergingTemplate:(id)arg0 intoTemplate:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_allThemePropertyNames;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithJSONDictionary:(id)arg0 versionNumber:(NSInteger)arg1 ;
-(void)mergeFromTemplate:(id)arg0 ;


@end


#endif