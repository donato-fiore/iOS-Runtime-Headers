// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCSLOCALEHELPER_H
#define BCSLOCALEHELPER_H

@class NSLocale;
@protocol BCSLocaleHelperProtocol;

#import <Foundation/Foundation.h>


@interface BCSLocaleHelper : NSObject <BCSLocaleHelperProtocol>



@property (readonly, nonatomic) NSLocale *currentLocale;


-(id)description;


@end


#endif