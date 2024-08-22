// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKWEBCLIPBUNDLEIDENTIFIER_H
#define CRKWEBCLIPBUNDLEIDENTIFIER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CRKWebClipBundleIdentifier : NSObject

@property (readonly, nonatomic, getter=isSpecificWebClip) BOOL specificWebClip;
@property (readonly, copy, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (readonly, nonatomic, getter=isWebClipHostApplication) BOOL webClipHostApplication;


+(id)bundleIdentifierByLocatingWebClipBundleIdentifierInString:(id)arg0 ;
+(id)specificWebClipPrefix;
+(id)webClipBundleIdentifierInString:(id)arg0 ;
+(id)webClipHostApplicationBundleIdentifier;
-(id)init;
-(id)initWithString:(id)arg0 ;


@end


#endif