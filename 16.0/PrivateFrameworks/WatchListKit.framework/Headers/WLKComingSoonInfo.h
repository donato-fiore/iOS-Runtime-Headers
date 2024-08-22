// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKCOMINGSOONINFO_H
#define WLKCOMINGSOONINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WLKComingSoonInfo : NSObject

@property (readonly, copy, nonatomic) NSString *brandID; // ivar: _brandID
@property (readonly, nonatomic, getter=isComingSoon) BOOL comingSoon; // ivar: _comingSoon
@property (readonly, copy, nonatomic) NSString *dateFormat; // ivar: _dateFormat
@property (readonly, copy, nonatomic) NSString *dateString; // ivar: _dateString
@property (readonly, nonatomic) NSUInteger precision; // ivar: _precision


+(id)comingSoonItemsWithDictionaries:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 brandID:(id)arg1 ;
-(void)_initializeDatesStrings;


@end


#endif