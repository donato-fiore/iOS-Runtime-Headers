// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRUIFLOCALIZATION_H
#define SRUIFLOCALIZATION_H

@class NSBundle, NSString, AFLocalization;

#import <Foundation/Foundation.h>


@interface SRUIFLocalization : NSObject {
    NSBundle *_bundle;
    NSString *_tableName;
    AFLocalization *_localization;
}




-(id)init;
-(id)initWithBundle:(id)arg0 tableName:(id)arg1 ;
-(id)localizedStringForLanguageCode:(id)arg0 key:(id)arg1 ;
-(id)localizedStringWithSiriLanguageForKey:(id)arg0 ;


@end


#endif