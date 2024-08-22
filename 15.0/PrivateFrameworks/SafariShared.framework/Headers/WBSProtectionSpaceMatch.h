// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSPROTECTIONSPACEMATCH_H
#define WBSPROTECTIONSPACEMATCH_H

@class NSDictionary, NSURLCredential, NSURLProtectionSpace;

#import <Foundation/Foundation.h>


@interface WBSProtectionSpaceMatch : NSObject

@property (readonly, copy, nonatomic) NSDictionary *credentials; // ivar: _credentials
@property (readonly, nonatomic) NSURLCredential *defaultCredential; // ivar: _defaultCredential
@property (readonly, nonatomic) NSInteger matchLevel; // ivar: _matchLevel
@property (readonly, nonatomic) NSURLProtectionSpace *protectionSpace; // ivar: _protectionSpace


-(id)initWithProtectionSpace:(id)arg0 credentials:(id)arg1 defaultCredential:(id)arg2 matchLevel:(NSInteger)arg3 ;


@end


#endif