// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFISO6709PARSER_H
#define PFISO6709PARSER_H


#import <Foundation/Foundation.h>


@interface PFISO6709Parser : NSObject



+(BOOL)parseISO6709String:(id)arg0 outLatitude:(*CGFloat)arg1 outLongitude:(*CGFloat)arg2 ;
+(BOOL)parseISO6709String:(id)arg0 outLatitudeNumber:(*id)arg1 outLongitudeNumber:(*id)arg2 ;


@end


#endif