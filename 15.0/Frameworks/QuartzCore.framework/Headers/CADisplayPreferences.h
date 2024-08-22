// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CADISPLAYPREFERENCES_H
#define CADISPLAYPREFERENCES_H

@class NSString;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface CADisplayPreferences : NSObject <NSCopying, NSMutableCopying>

 {
    *CADisplayPreferencesPriv _priv;
}


@property (readonly, nonatomic) int _preferredHdrType;
@property (nonatomic) BOOL matchContent;
@property (copy, nonatomic) NSString *preferredHdrMode;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithMatchContent:(BOOL)arg0 preferredHdrType:(int)arg1 ;
-(id)initWithPreferences:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;


@end


#endif