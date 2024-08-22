// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDJOBOPTIONS_H
#define ASDJOBOPTIONS_H

@class NSXPCConnection;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ASDJobManifest.h"

@interface ASDJobOptions : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSXPCConnection *endpoint; // ivar: _endpoint
@property (retain, nonatomic) ASDJobManifest *manifest; // ivar: _manifest


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif