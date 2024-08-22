// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNKFOREGROUNDAPP_H
#define CNKFOREGROUNDAPP_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CNKForegroundApp : NSObject {
    ? bundleIdentifier;
    ? type;
}


@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *debugDescription;


-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 type:(NSInteger)arg1 ;


@end


#endif