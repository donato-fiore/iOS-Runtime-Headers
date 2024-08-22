// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HIDTRANSACTION_H
#define HIDTRANSACTION_H


#import <Foundation/Foundation.h>


@interface HIDTransaction : NSObject {
    *__IOHIDTransaction _transaction;
}


@property NSInteger direction;


-(BOOL)commitElements:(id)arg0 error:(*id)arg1 ;
-(BOOL)commitElements:(id)arg0 error:(*id)arg1 timeout:(NSInteger)arg2 callback:(id)arg3 ;
-(id)description;
-(id)initWithDevice:(id)arg0 ;
-(void)dealloc;


@end


#endif