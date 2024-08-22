// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSCONSTELLATIONCONTENTUTILITIES_H
#define TPSCONSTELLATIONCONTENTUTILITIES_H


#import <Foundation/Foundation.h>


@interface TPSConstellationContentUtilities : NSObject



+(BOOL)contentContainsLink:(id)arg0 ;
+(NSInteger)contentTypeForContentDictionary:(id)arg0 ;
+(NSInteger)markTypeForMarkDictionary:(id)arg0 ;
+(id)contentClasses;
+(id)hrefForLinkMark:(id)arg0 ;
+(id)textForContentNode:(id)arg0 ;
+(id)textRepresentationForContent:(id)arg0 ;


@end


#endif