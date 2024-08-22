// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GEOCOUNTRYCONFIGURATIONINFO_H
#define _GEOCOUNTRYCONFIGURATIONINFO_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface _GEOCountryConfigurationInfo : NSObject {
    unsigned int _source;
    NSString *_countryCode;
    NSDate *_dateOfLastUpdate;
}




-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif