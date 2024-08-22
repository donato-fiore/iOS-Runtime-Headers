// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLSHAREDEVENTHANDLE_H
#define MTLSHAREDEVENTHANDLE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MTLSharedEventHandle : NSObject <NSSecureCoding>

 {
    *MTLSharedEventHandlePrivate _priv;
}


@property (readonly) NSString *label;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSharedEvent:(id)arg0 ;
-(unsigned int)eventPort;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif