// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKIDPUTILITY_H
#define AKIDPUTILITY_H


#import <Foundation/Foundation.h>


@interface AKIDPUtility : NSObject



+(BOOL)dictionary:(id)arg0 containsKeys:(id)arg1 ;
+(BOOL)isMicrosoftRequestDictionary:(id)arg0 ;
+(id)convertError:(id)arg0 ;
+(id)idpURLFromRequest:(id)arg0 ;
+(id)microsoftLoginURLFromParameters:(id)arg0 ;
+(id)parametersFromRequest:(id)arg0 ;
+(id)parametersFromResponseURL:(id)arg0 request:(id)arg1 ;


@end


#endif