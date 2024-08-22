// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKSCRIPTSTORESHEETREQUEST_H
#define SKSCRIPTSTORESHEETREQUEST_H

@class SUScriptObject, WebScriptObject, NSString;



@interface SKScriptStoreSheetRequest : SUScriptObject {
    NSInteger _pageStyle;
    WebScriptObject *_productParameters;
    NSString *_productURL;
}


@property NSInteger productPageStyle;
@property (readonly) NSInteger productPageStyleAutomatic;
@property (readonly) NSInteger productPageStyleBanner;
@property (readonly) NSInteger productPageStylePad;
@property (readonly) NSInteger productPageStylePhone;
@property (retain) WebScriptObject *productParameters;
@property (retain) NSString *productURL;


+(id)webScriptNameForKey:(char *)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)_safeValueForValue:(id)arg0 ;
-(id)attributeKeys;
-(id)newNativeStorePageRequest;
-(id)scriptAttributeKeys;


@end


#endif