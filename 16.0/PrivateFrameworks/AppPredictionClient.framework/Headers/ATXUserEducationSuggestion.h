// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXUSEREDUCATIONSUGGESTION_H
#define ATXUSEREDUCATIONSUGGESTION_H

@class NSUUID;
@protocol ATXUserEducationSuggestion, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXUserEducationSuggestion : NSObject <ATXUserEducationSuggestion, NSSecureCoding>



@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRandomUUID;
-(id)initWithUUID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif