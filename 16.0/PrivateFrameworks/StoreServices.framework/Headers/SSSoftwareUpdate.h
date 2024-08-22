// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSSOFTWAREUPDATE_H
#define SSSOFTWAREUPDATE_H

@class NSString, NSDate, NSDictionary;

#import <Foundation/Foundation.h>


@interface SSSoftwareUpdate : NSObject

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSDate *installDate; // ivar: _installDate
@property (readonly, nonatomic) NSInteger parentalControlsRank;
@property (readonly, nonatomic) NSInteger storeItemIdentifier;
@property (readonly, nonatomic) NSDictionary *updateDictionary; // ivar: _dictionary
@property (nonatomic) NSInteger updateState; // ivar: _updateState


-(id)initWithUpdateDictionary:(id)arg0 ;
-(void)dealloc;


@end


#endif