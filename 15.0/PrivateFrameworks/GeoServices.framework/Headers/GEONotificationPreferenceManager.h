// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEONOTIFICATIONPREFERENCEMANAGER_H
#define GEONOTIFICATIONPREFERENCEMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface GEONotificationPreferenceManager : NSObject {
    NSMutableDictionary *_enableFlags;
}




+(id)sharedManager;
-(BOOL)isEnabledForSubTestWithName:(id)arg0 ;
-(id)init;
-(void)reset;
-(void)setEnabled:(BOOL)arg0 forSubTestWithName:(id)arg1 ;


@end


#endif