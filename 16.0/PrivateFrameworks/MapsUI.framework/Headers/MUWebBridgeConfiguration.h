// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUWEBBRIDGECONFIGURATION_H
#define MUWEBBRIDGECONFIGURATION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MUWebBridgeConfiguration : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *bridgeVersion; // ivar: _bridgeVersion
@property (readonly, copy, nonatomic) NSString *nativeControllerName; // ivar: _nativeControllerName
@property (readonly, copy, nonatomic) NSString *webControllerName; // ivar: _webControllerName


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithNativeControllerName:(id)arg0 webControllerName:(id)arg1 bridgeVersion:(id)arg2 ;


@end


#endif