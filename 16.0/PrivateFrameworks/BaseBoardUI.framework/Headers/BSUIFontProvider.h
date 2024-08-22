// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSUIFONTPROVIDER_H
#define BSUIFONTPROVIDER_H


#import <Foundation/Foundation.h>


@interface BSUIFontProvider : NSObject {
    BOOL _isDefault;
}




+(id)defaultFontProvider;
+(id)preferredFontProvider;
-(id)preferredFontForTextStyle:(id)arg0 hiFontStyle:(NSInteger)arg1 ;
-(id)preferredFontForTextStyle:(id)arg0 hiFontStyle:(NSInteger)arg1 contentSizeCategory:(id)arg2 ;


@end


#endif