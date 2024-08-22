// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKAPPLICATIONINFO_H
#define CRKAPPLICATIONINFO_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface CRKApplicationInfo : NSObject

@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *shortVersionString; // ivar: _shortVersionString


+(id)bundleIdentifierFromDictionaryRepresentation:(id)arg0 ;
+(id)bundleIdentifiersFromDictionaryRepresentations:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithBundleIdentifier:(id)arg0 shortVersionString:(id)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;


@end


#endif