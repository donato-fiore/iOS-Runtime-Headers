// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHCATALOG_H
#define SHCATALOG_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SHCatalog : NSObject

@property (readonly, copy, nonatomic) NSString *_installationID; // ivar: __installationID
@property (readonly, nonatomic) CGFloat maximumQuerySignatureDuration;
@property (readonly, nonatomic) CGFloat minimumQuerySignatureDuration;


+(BOOL)_validateInstallationID:(id)arg0 ;
-(CGFloat)_bufferDuration;
-(id)_createMatcher;
-(id)_initWithInstallationID:(id)arg0 ;


@end


#endif