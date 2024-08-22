// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSTHIRDPARTYAPP_H
#define PSTHIRDPARTYAPP_H

@class NSString, LSApplicationProxy;

#import <Foundation/Foundation.h>


@interface PSThirdPartyApp : NSObject {
    NSString *_localizedName;
}


@property (readonly, nonatomic) LSApplicationProxy *proxy; // ivar: _proxy


-(id)description;
-(id)initWithApplicationProxy:(id)arg0 ;
-(id)localizedName;
-(void)load;


@end


#endif