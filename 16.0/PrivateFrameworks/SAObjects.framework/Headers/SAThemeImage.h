// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SATHEMEIMAGE_H
#define SATHEMEIMAGE_H

@class NSString, NSData;


#import "SADomainObject.h"

@interface SAThemeImage : SADomainObject

@property (copy, nonatomic) NSString *appearanceSetting;
@property (copy, nonatomic) NSData *dynamicImage;


+(id)themeImage;
+(id)themeImageWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif