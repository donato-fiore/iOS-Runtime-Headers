// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDISCOVERYMESSAGESMETADATA_H
#define PKDISCOVERYMESSAGESMETADATA_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface PKDiscoveryMessagesMetadata : NSObject

@property (readonly, nonatomic) NSURL *messagesBundleURL; // ivar: _messagesBundleURL
@property (readonly, nonatomic) NSInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif