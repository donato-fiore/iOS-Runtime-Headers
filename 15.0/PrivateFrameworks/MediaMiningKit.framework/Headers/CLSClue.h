// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSCLUE_H
#define CLSCLUE_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "CLSInformant.h"
#import "CLSProfile.h"

@interface CLSClue : NSObject

@property CGFloat confidence; // ivar: _confidence
@property (retain) NSDictionary *extraParameters; // ivar: _extraParameters
@property (retain) CLSInformant *informant; // ivar: _informant
@property (retain) NSString *informantIdentifier; // ivar: _informantIdentifier
@property (copy) NSString *key; // ivar: _key
@property (retain) CLSProfile *profile; // ivar: _profile
@property (retain) NSString *profileIdentifier; // ivar: _profileIdentifier
@property CGFloat relevance; // ivar: _relevance
@property BOOL transient; // ivar: _transient
@property (retain) id *value; // ivar: _value
@property NSUInteger versionCount; // ivar: _versionCount


+(id)_clueWithValue:(id)arg0 forKey:(id)arg1 ;
+(id)_clueWithValue:(id)arg0 forKey:(id)arg1 confidence:(CGFloat)arg2 relevance:(CGFloat)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToClue:(id)arg0 ;
-(CGFloat)doubleValue;
-(CGFloat)score;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)compareScore:(id)arg0 ;
-(NSInteger)integerValue;
-(NSUInteger)enumValue;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)stringValue;
-(void)_incrementVersionCount;


@end


#endif