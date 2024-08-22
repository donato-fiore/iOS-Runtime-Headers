// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDANNOTATIONDATA_H
#define WDANNOTATIONDATA_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>

#import "WDText.h"

@interface WDAnnotationData : NSObject {
    WDText *mText;
    NSDate *mDate;
    NSString *mOwner;
}




-(id)date;
-(id)initWithText:(id)arg0 ;
-(id)owner;
-(id)text;
-(void)setDate:(id)arg0 ;
-(void)setOwner:(id)arg0 ;


@end


#endif