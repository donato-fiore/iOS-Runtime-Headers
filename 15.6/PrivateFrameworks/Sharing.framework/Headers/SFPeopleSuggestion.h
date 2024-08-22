// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFPEOPLESUGGESTION_H
#define SFPEOPLESUGGESTION_H

@class NSArray, NSString, INImage;
@protocol SFPeopleSuggestion, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFPeopleSuggestion : NSObject <SFPeopleSuggestion, NSSecureCoding>



@property (copy, nonatomic) NSArray *contacts; // ivar: _contacts
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) INImage *donatedImage; // ivar: _donatedImage
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isRestricted; // ivar: _isRestricted
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *transportBundleIdentifier; // ivar: _transportBundleIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif