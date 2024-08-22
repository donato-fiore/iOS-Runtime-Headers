// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKJSACCOUNTINFO_H
#define IKJSACCOUNTINFO_H

@class NSString;
@protocol VUIJSAccountInfoInterface;


#import "VUIJSObject.h"

@interface IKJSAccountInfo : VUIJSObject <VUIJSAccountInfoInterface>



@property (readonly, nonatomic) NSString *DSID;
@property (readonly, nonatomic) NSString *appleId;
@property (readonly, nonatomic) NSString *storefrontId;


-(id)initWithAppContext:(id)arg0 ;


@end


#endif