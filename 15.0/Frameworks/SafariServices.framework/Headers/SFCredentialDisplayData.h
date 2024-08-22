// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFCREDENTIALDISPLAYDATA_H
#define SFCREDENTIALDISPLAYDATA_H

@class NSDate, NSString, WBSCredentialMatch;

#import <Foundation/Foundation.h>


@interface SFCredentialDisplayData : NSObject

@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy, nonatomic) NSString *detail; // ivar: _detail
@property (readonly, nonatomic) WBSCredentialMatch *match; // ivar: _match


+(id)descriptionForPasswordWithUser:(id)arg0 creationDate:(id)arg1 ;
-(id)initWithMatch:(id)arg0 detail:(id)arg1 creationDate:(id)arg2 ;


@end


#endif