// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UPSHAREDENTITYRESOLUTION_H
#define UPSHAREDENTITYRESOLUTION_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface UPSharedEntityResolution : NSObject

@property (readonly, nonatomic) NSDictionary *_dataDetectorDateTimeSpansByTokenRange; // ivar: __dataDetectorDateTimeSpansByTokenRange


+(id)buildDataDetectorDateTimeSpansByTokenRange:(id)arg0 ;
-(id)initWithMatchingSpans:(id)arg0 ;
-(id)resolveSharedEntityForTokenRange:(struct _NSRange )arg0 valueType:(id)arg1 ;


@end


#endif