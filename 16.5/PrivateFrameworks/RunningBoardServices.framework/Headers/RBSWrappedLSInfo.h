// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBSWRAPPEDLSINFO_H
#define RBSWRAPPEDLSINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface RBSWrappedLSInfo : NSObject

@property (readonly, copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy, nonatomic) NSString *personaString; // ivar: _personaString


+(id)infoWithBundleID:(id)arg0 personaString:(id)arg1 ;
-(id)_initWithBundleID:(id)arg0 personaString:(id)arg1 ;


@end


#endif