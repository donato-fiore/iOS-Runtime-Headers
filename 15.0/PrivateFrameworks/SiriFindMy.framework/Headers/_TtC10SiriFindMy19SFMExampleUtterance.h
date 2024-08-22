// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC10SIRIFINDMY19SFMEXAMPLEUTTERANCE_H
#define _TTC10SIRIFINDMY19SFMEXAMPLEUTTERANCE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TtC10SiriFindMy19SFMExampleUtterance : NSObject {
    ? languageProvider;
    ? role;
    ? isTesting;
    ? $__lazy_storage_$_utteranceText;
}


@property (nonatomic, copy) NSString *utteranceText;


-(id)init;
-(id)initForRole:(id)arg0 ;


@end


#endif