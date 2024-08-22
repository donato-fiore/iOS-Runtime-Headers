// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKCLIENTLOCALIZEDSTRINGS_H
#define VKCLIENTLOCALIZEDSTRINGS_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface VKClientLocalizedStrings : NSObject {
    NSDictionary *_stringDictionary;
    NSString *_locale;
}




-(id)initWithStrings:(id)arg0 locale:(id)arg1 ;
-(void)dealloc;
-(void)getTextForKey:(id)arg0 text:(*id)arg1 locale:(*id)arg2 ;


@end


#endif