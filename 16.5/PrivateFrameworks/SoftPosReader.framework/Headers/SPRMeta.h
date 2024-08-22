// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPRMETA_H
#define SPRMETA_H

@class NSString, NSDate, NSBundle;

#import <Foundation/Foundation.h>


@interface SPRMeta : NSObject {
    NSString *_timestamp;
}


@property (readonly, copy) NSDate *buildDate;
@property (readonly) NSBundle *bundle; // ivar: _bundle
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *bundleVersion;


+(id)current;
-(id)description;
-(id)initWithBundle:(id)arg0 timestamp:(id)arg1 ;


@end


#endif