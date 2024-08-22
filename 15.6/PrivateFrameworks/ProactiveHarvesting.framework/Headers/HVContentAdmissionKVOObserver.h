// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HVCONTENTADMISSIONKVOOBSERVER_H
#define HVCONTENTADMISSIONKVOOBSERVER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HVContentAdmissionKVOObserver : NSObject {
    NSString *_key;
    id *_handler;
}




+(id)observeObject:(id)arg0 key:(id)arg1 handler:(id)arg2 ;
-(id)initWithKey:(id)arg0 handler:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif