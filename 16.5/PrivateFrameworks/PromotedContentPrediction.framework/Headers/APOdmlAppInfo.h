// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APODMLAPPINFO_H
#define APODMLAPPINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface APOdmlAppInfo : NSObject

@property (nonatomic) NSUInteger adamID; // ivar: _adamID
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithBundleID:(id)arg0 adamID:(NSUInteger)arg1 ;


@end


#endif