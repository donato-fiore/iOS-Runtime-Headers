// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SABINARYLOCATOR_H
#define SABINARYLOCATOR_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface SABinaryLocator : NSObject {
    NSMutableDictionary *_mappings;
    NSString *_buildNumber;
    BOOL _dirty;
    BOOL _enabled;
}




+(id)sharedBinaryLocator;
-(id)init;
-(void)done;


@end


#endif