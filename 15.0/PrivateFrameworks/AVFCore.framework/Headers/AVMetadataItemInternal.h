// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVMETADATAITEMINTERNAL_H
#define AVMETADATAITEMINTERNAL_H

@class NSString, NSLocale, NSDate, NSDictionary;
@protocol NSObject><NSCopying;

#import <Foundation/Foundation.h>


@interface AVMetadataItemInternal : NSObject {
    *OpaqueFigMetadataReader reader;
    NSInteger itemIndex;
    NSString *identifier;
    NSString *keySpace;
    id<NSObject><NSCopying> *key;
    NSString *commonKey;
    NSLocale *locale;
    NSString *extendedLanguageTag;
    NSString *languageCode;
    id<NSObject><NSCopying> *value;
    ? time;
    ? duration;
    NSDate *startDate;
    NSDate *discoveryTimestamp;
    NSString *dataType;
    NSDictionary *extras;
}






@end


#endif