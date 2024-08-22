// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIWEBCLIPICON_H
#define UIWEBCLIPICON_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface UIWebClipIcon : NSObject

@property (nonatomic) CGSize bestSize; // ivar: _bestSize
@property (nonatomic, getter=isPrecomposed) BOOL precomposed; // ivar: _precomposed
@property (nonatomic, getter=isSiteWide) BOOL siteWide; // ivar: _siteWide
@property (retain, nonatomic) NSURL *url; // ivar: _url


-(NSInteger)compare:(id)arg0 preferringDeviceIconSizes:(BOOL)arg1 ;


@end


#endif