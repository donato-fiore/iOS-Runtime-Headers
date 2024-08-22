// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHCUSTOMICONELEMENT_H
#define SBHCUSTOMICONELEMENT_H

@class NSString;
@protocol NSCopying, SBLeafIconDataSource;

#import <Foundation/Foundation.h>


@interface SBHCustomIconElement : NSObject <NSCopying, SBLeafIconDataSource>



@property (readonly, copy, nonatomic) NSString *configurationStorageIdentifier;
@property (readonly, copy, nonatomic) NSString *containerBundleIdentifier; // ivar: _containerBundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger suggestionSource; // ivar: _suggestionSource
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


+(Class)elementClassWithIdentifier:(id)arg0 ;
+(id)elementIdentifier;
-(NSUInteger)priorityForIcon:(id)arg0 ;
-(id)copyWithSuggestionSource:(NSInteger)arg0 ;
-(id)copyWithUniqueIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)icon:(id)arg0 displayNameForLocation:(id)arg1 ;
-(id)init;
-(id)initWithUniqueIdentifier:(id)arg0 ;


@end


#endif