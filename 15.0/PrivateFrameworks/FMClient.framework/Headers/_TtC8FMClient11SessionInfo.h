// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8FMCLIENT11SESSIONINFO_H
#define _TTC8FMCLIENT11SESSIONINFO_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC8FMClient11SessionInfo : NSObject <NSSecureCoding>

 {
    ? bundleId;
    ? processName;
}




+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif