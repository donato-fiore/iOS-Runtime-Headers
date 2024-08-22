// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFPEOPLESUGGESTION_H
#define SFPEOPLESUGGESTION_H

@class NSArray, NSString, INImage;
@protocol SFPeopleSuggestion;

#import <Foundation/Foundation.h>


@interface SFPeopleSuggestion : NSObject <SFPeopleSuggestion>



@property (readonly, copy, nonatomic) NSArray *contacts; // ivar: _contacts
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) INImage *donatedImage; // ivar: _donatedImage
@property (readonly, copy, nonatomic) NSArray *formattedHandles; // ivar: _formattedHandles
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isGroup;
@property (nonatomic) BOOL isRestricted; // ivar: _isRestricted
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *transportBundleIdentifier; // ivar: _transportBundleIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayName:(id)arg1 transportBundleIdentifier:(id)arg2 contacts:(id)arg3 formattedHandles:(id)arg4 donatedImage:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif