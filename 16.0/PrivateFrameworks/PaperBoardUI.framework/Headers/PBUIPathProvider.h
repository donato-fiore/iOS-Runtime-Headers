// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIPATHPROVIDER_H
#define PBUIPATHPROVIDER_H

@class NSURL, NSString;
@protocol BSPathProviding;

#import <Foundation/Foundation.h>


@interface PBUIPathProvider : NSObject <BSPathProviding>



@property (retain, nonatomic) NSURL *cachesPath; // ivar: _cachesPath
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSURL *defaultPath; // ivar: _defaultPath
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURL *libraryPath; // ivar: _libraryPath
@property (readonly) Class superclass;


+(id)providerFromProvider:(id)arg0 ;
-(id)initFromProvider:(id)arg0 ;


@end


#endif