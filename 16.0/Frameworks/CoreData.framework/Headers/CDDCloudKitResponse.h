// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDDCLOUDKITRESPONSE_H
#define CDDCLOUDKITRESPONSE_H

@class NSError;
@protocol NSCoding, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CDDCloudKitMessage.h"

@interface CDDCloudKitResponse : NSObject <NSCoding, NSSecureCoding>

 {
    BOOL _success;
    CDDCloudKitMessage *_message;
    NSError *_error;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif