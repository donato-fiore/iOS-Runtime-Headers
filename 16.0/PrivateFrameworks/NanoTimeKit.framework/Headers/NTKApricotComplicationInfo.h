// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKAPRICOTCOMPLICATIONINFO_H
#define NTKAPRICOTCOMPLICATIONINFO_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NTKApricotComplicationInfo : NSObject <NSCopying>



@property (retain, nonatomic) NSString *localizedAppName; // ivar: _localizedAppName
@property (retain, nonatomic) NSString *localizedDisplayName; // ivar: _localizedDisplayName


-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAppName:(id)arg0 displayName:(id)arg1 ;


@end


#endif