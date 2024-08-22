// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPRMETA_H
#define SPRMETA_H

@class NSDate, NSBundle, NSString;

#import <Foundation/Foundation.h>


@interface SPRMeta : NSObject

@property (readonly, copy) NSDate *buildDate; // ivar: _buildDate
@property (readonly) NSBundle *bundle; // ivar: _bundle
@property (readonly, copy) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *bundleVersion; // ivar: _bundleVersion


+(id)current;
-(id)description;
-(id)initWithBundle:(id)arg0 timestamp:(id)arg1 ;


@end


#endif