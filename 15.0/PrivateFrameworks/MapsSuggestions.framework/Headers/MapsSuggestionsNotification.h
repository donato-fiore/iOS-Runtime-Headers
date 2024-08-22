// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSUGGESTIONSNOTIFICATION_H
#define MAPSSUGGESTIONSNOTIFICATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsNotification : NSObject <NSCopying>

 {
    Notification _notification;
}


@property (readonly, nonatomic) char * darwinNotification;
@property (readonly, nonatomic) NSUInteger state;


-(BOOL)stateCouldHaveBeenPayloadString:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCppNotification:(*void)arg0 ;


@end


#endif