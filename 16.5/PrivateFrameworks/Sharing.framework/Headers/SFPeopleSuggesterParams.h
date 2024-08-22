// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFPEOPLESUGGESTERPARAMS_H
#define SFPEOPLESUGGESTERPARAMS_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFPeopleSuggesterParams : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *contactIDs; // ivar: _contactIDs
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (nonatomic) unsigned int maxPeople; // ivar: _maxPeople


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif