// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRCPINENTRYATTRIBUTES_H
#define TVRCPINENTRYATTRIBUTES_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TVRCPINEntryAttributes : NSObject <NSSecureCoding>

 {
    NSArray *_groupLengths;
}


@property (readonly, nonatomic) NSUInteger numberOfDigitGroups;
@property (readonly, nonatomic) NSUInteger totalDigitCount;


+(BOOL)supportsSecureCoding;
-(NSUInteger)numberOfDigitsInGroup:(NSUInteger)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDigitCount:(NSUInteger)arg0 ;
-(id)initWithGroupLengths:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif