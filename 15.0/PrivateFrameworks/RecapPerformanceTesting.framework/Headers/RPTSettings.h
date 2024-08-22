// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RPTSETTINGS_H
#define RPTSETTINGS_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface RPTSettings : NSObject

@property (retain, nonatomic) NSURL *recapOverrideFileURL; // ivar: _recapOverrideFileURL


+(id)processEnvironment;
-(id)init;
-(id)initFromDictionary:(id)arg0 ;


@end


#endif