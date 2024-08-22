// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __CFNOTIFICATION_H
#define __CFNOTIFICATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface __CFNotification : NSObject <NSCopying>

 {
    id *_name;
    id *_object;
    id *_userInfo;
    BOOL _fouSemantics;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithName:(struct __CFString *)arg0 object:(*void)arg1 userInfo:(struct __CFDictionary *)arg2 foundation:(BOOL)arg3 ;
-(id)name;
-(id)object;
-(id)userInfo;
-(void)dealloc;


@end


#endif