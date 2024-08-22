// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVINTERNETDATEFORMATTER_H
#define AVINTERNETDATEFORMATTER_H

@class NSISO8601DateFormatter;

#import <Foundation/Foundation.h>


@interface AVInternetDateFormatter : NSObject {
    NSISO8601DateFormatter *_dateFormatter;
}




+(id)internetDateFormatter;
-(id)dateFromString:(id)arg0 ;
-(id)init;
-(id)stringFromDate:(id)arg0 ;


@end


#endif