// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSURLACTIONCOMPONENTS_H
#define TPSURLACTIONCOMPONENTS_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface TPSURLActionComponents : NSObject

@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (nonatomic) NSUInteger actionType; // ivar: _actionType
@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID


+(NSUInteger)_actionTypeForString:(id)arg0 ;
+(id)componentsWithURL:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(void)_parseURL:(id)arg0 ;


@end


#endif