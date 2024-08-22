// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAUINANOIMAGERESOURCE_H
#define SAUINANOIMAGERESOURCE_H

@class NSString;


#import "SAUIImageResource.h"
#import "SAUIDecoratedText.h"

@interface SAUINanoImageResource : SAUIImageResource

@property (nonatomic) BOOL backgroundNeeded;
@property (copy, nonatomic) NSString *imageDownloadType;
@property (retain, nonatomic) SAUIDecoratedText *monogram;
@property (copy, nonatomic) NSString *placeholderImage;


+(id)nanoImageResource;
+(id)nanoImageResourceWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif