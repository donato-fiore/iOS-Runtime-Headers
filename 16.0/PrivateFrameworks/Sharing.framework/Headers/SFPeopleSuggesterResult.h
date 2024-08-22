// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFPEOPLESUGGESTERRESULT_H
#define SFPEOPLESUGGESTERRESULT_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFPeopleSuggesterResult : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *contactID; // ivar: _contactID
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (copy, nonatomic) NSArray *handles; // ivar: _handles
@property (copy, nonatomic) NSString *sendersKnownAlias; // ivar: _sendersKnownAlias


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif