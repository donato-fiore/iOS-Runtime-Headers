// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPHYPERLINKFIELD_H
#define TSWPHYPERLINKFIELD_H

@class NSURL, NSString;


#import "TSWPSmartField.h"

@interface TSWPHyperlinkField : TSWPSmartField {
    NSURL *_url;
}


@property (readonly, nonatomic) NSString *displayText;
@property (retain, nonatomic, setter=setURL:) NSURL *url;


+(BOOL)schemeIsValidForURL:(id)arg0 ;
+(BOOL)schemeIsValidForURLReference:(id)arg0 ;
+(id)defaultFieldStyleIdentifier;
+(id)defaultFileURL;
+(id)defaultMailURL;
+(id)defaultURLFromDefaultsKey:(id)arg0 defaultValue:(id)arg1 ;
+(id)defaultWebURL;
+(id)newURLFromURLReference:(id)arg0 ;
+(id)urlReferenceFromURL:(id)arg0 ;
+(int)schemeFromURL:(id)arg0 ;
-(BOOL)allowsEditing;
-(BOOL)hasDisplayText;
-(BOOL)isFileURL;
-(id)canonicalRepresentationURL;
-(id)copyWithContext:(id)arg0 ;
-(id)filePath;
-(id)fullPath;
-(id)initWithContext:(id)arg0 url:(id)arg1 ;
-(int)elementKind;
-(int)scheme;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)dealloc;
-(void)setURLReference:(id)arg0 ;


@end


#endif