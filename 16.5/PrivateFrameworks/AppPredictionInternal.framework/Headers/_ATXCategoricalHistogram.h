// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ATXCATEGORICALHISTOGRAM_H
#define _ATXCATEGORICALHISTOGRAM_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _ATXCategoricalHistogram : NSObject <NSSecureCoding>

 {
    unsigned int _count;
    unsigned int _capacity;
    *? _entries;
    NSDictionary *_lastDates;
}




+(BOOL)supportsSecureCoding;
-(id)getLastDatesByCategoryId;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerate:(id)arg0 ;


@end


#endif