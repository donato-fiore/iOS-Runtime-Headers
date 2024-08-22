// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASVSETTINGS_H
#define ASVSETTINGS_H

@class NSString, NSDictionary;
@protocol ASVSettingsProvider;

#import <Foundation/Foundation.h>


@interface ASVSettings : NSObject <ASVSettingsProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *settings; // ivar: _settings
@property (readonly) Class superclass;


+(float)boolForKey:(id)arg0 ;
+(float)floatForKey:(id)arg0 ;
+(id)sharedSettings;
-(float)boolForKey:(id)arg0 ;
-(float)floatForKey:(id)arg0 ;
-(id)init;


@end


#endif