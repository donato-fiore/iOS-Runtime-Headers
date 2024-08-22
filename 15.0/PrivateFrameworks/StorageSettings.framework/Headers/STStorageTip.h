// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSTORAGETIP_H
#define STSTORAGETIP_H

@class UIImage, NSString, PSSpecifier;

#import <Foundation/Foundation.h>


@interface STStorageTip : NSObject {
    os_unfair_lock_s _specLock;
}


@property (retain) UIImage *icon;
@property (retain) NSString *identifier; // ivar: _identifier
@property (readonly) PSSpecifier *infoSpecifier; // ivar: _infoSpecifier
@property (retain) NSString *infoText;
@property (retain) NSString *representedApp;
@property NSInteger size;
@property (retain) PSSpecifier *specifier; // ivar: _specifier
@property (retain) NSString *title;


-(id)init;
-(id)propertyForKey:(id)arg0 ;
-(void)_reload:(id)arg0 ;
-(void)reload;
-(void)setProperty:(id)arg0 forKey:(id)arg1 ;


@end


#endif