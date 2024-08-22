// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EXEXTENSIONPOINT_H
#define _EXEXTENSIONPOINT_H

@class NSDictionary, NSString, NSURL;
@protocol EXExtensionPoint, NSCopying;

#import <Foundation/Foundation.h>


@interface _EXExtensionPoint : NSObject <EXExtensionPoint, NSCopying>



@property (retain) NSDictionary *SDKDictionary; // ivar: _SDKDictionary
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSString *identifier; // ivar: _identifier
@property unsigned int platform; // ivar: _platform
@property (readonly) Class superclass;
@property (retain) NSURL *url; // ivar: _url
@property NSUInteger variant; // ivar: _variant


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)reset;


@end


#endif