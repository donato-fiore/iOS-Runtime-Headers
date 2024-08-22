// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CATCONTEXT_H
#define CATCONTEXT_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface CATContext : NSObject

@property NSInteger currentTime; // ivar: _currentTime
@property BOOL isMultiUserEnabled; // ivar: _isMultiUserEnabled
@property unsigned int randomSeed; // ivar: _randomSeed
@property BOOL requiresUserGrounding; // ivar: _requiresUserGrounding
@property (retain, nonatomic) NSString *siriLocale; // ivar: _siriLocale
@property (retain, nonatomic) NSString *siriVoiceGender; // ivar: _siriVoiceGender
@property (retain, nonatomic) NSDictionary *userSettings; // ivar: _userSettings


-(id)init;
-(id)initWithInputLocale:(id)arg0 outputVoiceLocale:(id)arg1 ;
-(id)toDictionary;


@end


#endif