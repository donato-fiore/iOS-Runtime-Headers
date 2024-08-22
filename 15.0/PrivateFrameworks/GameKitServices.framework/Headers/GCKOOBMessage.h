// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GCKOOBMESSAGE_H
#define GCKOOBMESSAGE_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GCKOOBMessage : NSObject <NSSecureCoding>

 {
    unsigned int type;
    unsigned int band;
    NSData *data;
}




+(BOOL)supportsSecureCoding;
-(id)data;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(unsigned int)band;
-(unsigned int)type;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif