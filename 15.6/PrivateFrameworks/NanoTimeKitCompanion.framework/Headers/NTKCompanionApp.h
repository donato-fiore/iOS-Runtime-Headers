// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKCOMPANIONAPP_H
#define NTKCOMPANIONAPP_H

@class NSString, UIImage;
@protocol NTKCompanionAppDelegate;

#import <Foundation/Foundation.h>


@interface NTKCompanionApp : NSObject

@property (retain, nonatomic) NSString *containerApplicationIdentifier; // ivar: _containerApplicationIdentifier
@property (weak, nonatomic) NSObject<NTKCompanionAppDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL fetchingIcon; // ivar: _fetchingIcon
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *watchApplicationIdentifier; // ivar: _watchApplicationIdentifier


-(id)complication;


@end


#endif