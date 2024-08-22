// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLUICLIENT_H
#define WLUICLIENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WLUIClient : NSObject

@property (copy, nonatomic) NSString *brand; // ivar: _brand
@property (copy, nonatomic) NSString *hostname; // ivar: _hostname
@property (copy, nonatomic) NSString *model; // ivar: _model
@property (copy, nonatomic) NSString *name; // ivar: _name


-(id)initWithHostname:(id)arg0 brand:(id)arg1 model:(id)arg2 name:(id)arg3 ;


@end


#endif