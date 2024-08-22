// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKTOKENWATCHERTOKENINFO_H
#define TKTOKENWATCHERTOKENINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TKTokenWatcherTokenInfo : NSObject

@property (readonly, nonatomic) NSString *driverName; // ivar: _driverName
@property (readonly, nonatomic) NSString *slotName; // ivar: _slotName
@property (readonly, nonatomic) NSString *tokenID; // ivar: _tokenID


-(id)initWithTokenInfo:(id)arg0 ;


@end


#endif