// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REHTMLELEMENT_H
#define REHTMLELEMENT_H

@class NSData, NSDictionary, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface REHTMLElement : NSObject <NSCopying>

 {
    NSData *_data;
}


@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) NSArray *classes;
@property (readonly, nonatomic) NSData *encodedData;


+(NSUInteger)_defaultStringEncoding;
+(id)div;
+(id)elementWithHTMLData:(id)arg0 ;
+(id)elementWithHTMLString:(id)arg0 ;
+(id)h1:(id)arg0 ;
+(id)h2:(id)arg0 ;
+(id)h3:(id)arg0 ;
+(id)h4:(id)arg0 ;
+(id)h5:(id)arg0 ;
+(id)h6:(id)arg0 ;
+(id)htmlElementWithTag:(id)arg0 content:(id)arg1 ;
+(id)link:(id)arg0 title:(id)arg1 ;
+(id)nav;
+(id)script:(id)arg0 ;
-(id)_contentString;
-(id)_encodeString:(id)arg0 ;
-(id)_prefixContentString;
-(id)_suffixContentString;
-(id)addChild:(id)arg0 ;
-(id)addChildren:(id)arg0 ;
-(id)append:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)elementByAddingAtttibute:(id)arg0 value:(id)arg1 ;
-(id)elementByAddingAtttibutes:(id)arg0 ;
-(id)elementByAddingClass:(id)arg0 ;
-(id)elementByAddingClasses:(id)arg0 ;
-(id)elementBySettingAtttibutes:(id)arg0 ;
-(id)elementBySettingClasses:(id)arg0 ;
-(id)init;


@end


#endif