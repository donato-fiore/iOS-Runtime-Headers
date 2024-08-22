// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _KSTIUSERDICTIONARYENTRYVALUE_H
#define _KSTIUSERDICTIONARYENTRYVALUE_H

@class NSString, NSDate;
@protocol NSSecureCoding, _KSTIUserDictionaryEntry;

#import <Foundation/Foundation.h>


@interface _KSTIUserDictionaryEntryValue : NSObject <NSSecureCoding, _KSTIUserDictionaryEntry>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *phrase; // ivar: _phrase
@property (copy, nonatomic) NSString *shortcut; // ivar: _shortcut
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
+(id)valueWithEntry:(id)arg0 ;
-(BOOL)matchesEntry:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif