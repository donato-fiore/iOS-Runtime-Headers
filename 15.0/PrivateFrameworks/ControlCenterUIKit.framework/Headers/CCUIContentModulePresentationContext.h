// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CCUICONTENTMODULEPRESENTATIONCONTEXT_H
#define CCUICONTENTMODULEPRESENTATIONCONTEXT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CCUIContentModulePresentationContext : NSObject <NSCopying>



@property (readonly, nonatomic) NSInteger environment; // ivar: _environment


+(id)defaultAlertPresentationContext;
+(id)defaultControlCenterPresentationContext;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithEnvironment:(NSInteger)arg0 ;


@end


#endif