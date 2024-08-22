// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXFACESUGGESTIONFOCUSMODE_H
#define ATXFACESUGGESTIONFOCUSMODE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXFaceSuggestionFocusMode : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, copy, nonatomic) NSString *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 uuid:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif