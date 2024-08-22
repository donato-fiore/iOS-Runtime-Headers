// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDDCLOUDKITMESSAGE_H
#define CDDCLOUDKITMESSAGE_H

@class NSUUID;
@protocol NSCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CDDCloudKitMessage : NSObject <NSCoding, NSSecureCoding>

 {
    NSUUID *_identifier;
}




+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif