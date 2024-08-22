// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AACLIENT_H
#define AACLIENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AAClient : NSObject {
    ? identifier;
    ? name;
    ? version;
    ? buildNumber;
}


@property (nonatomic, readonly) NSInteger build; // ivar: build
@property (nonatomic, readonly) NSString *buildNumber;
@property (nonatomic, readonly) NSString *fullVersion;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *version;


-(id)init;
-(id)initWithBundle:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 version:(id)arg2 build:(NSInteger)arg3 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 version:(id)arg2 buildNumber:(id)arg3 ;


@end


#endif