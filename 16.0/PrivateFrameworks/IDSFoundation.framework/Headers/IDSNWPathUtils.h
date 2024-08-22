// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSNWPATHUTILS_H
#define IDSNWPATHUTILS_H


#import <Foundation/Foundation.h>


@interface IDSNWPathUtils : NSObject



+(id)sharedInstance;
-(BOOL)filterVirtualInterfaces:(char *)arg0 ;
-(BOOL)isVoWiFiInterface:(char *)arg0 ;
-(id)getDefaultPath;
-(id)init;
-(void)dealloc;


@end


#endif