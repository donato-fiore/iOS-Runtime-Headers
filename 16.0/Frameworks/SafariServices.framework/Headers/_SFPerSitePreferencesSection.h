// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFPERSITEPREFERENCESSECTION_H
#define _SFPERSITEPREFERENCESSECTION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface _SFPerSitePreferencesSection : NSObject

@property (readonly, nonatomic) NSArray *preferences; // ivar: _preferences
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)initWithTitle:(id)arg0 preferences:(id)arg1 ;


@end


#endif