// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFUBLOGEVENTID_H
#define PFUBLOGEVENTID_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PFUBLogEventID : NSObject {
    NSString *_idString;
    NSInteger _eventType;
}


@property (readonly, nonatomic) NSInteger hash; // ivar: _hash


+(void)initialize;
-(id)initWithCustomKey:(id)arg0 ;
-(id)initWithEventType:(int)arg0 ;


@end


#endif