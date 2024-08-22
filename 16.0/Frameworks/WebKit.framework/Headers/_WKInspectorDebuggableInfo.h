// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WKINSPECTORDEBUGGABLEINFO_H
#define _WKINSPECTORDEBUGGABLEINFO_H

@class NSString;
@protocol WKObject, NSCopying;

#import <Foundation/Foundation.h>


@interface _WKInspectorDebuggableInfo : NSObject <WKObject, NSCopying>

 {
    ObjectStorage<API::DebuggableInfo> _debuggableInfo;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSInteger debuggableType;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *targetBuildVersion;
@property (nonatomic) BOOL targetIsSimulator;
@property (copy, nonatomic) NSString *targetPlatformName;
@property (copy, nonatomic) NSString *targetProductVersion;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif