// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPSWITCHERSERVICESET_H
#define SBAPPSWITCHERSERVICESET_H

@class NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SBAppSwitcherServiceSet : NSObject <NSCopying>



@property (readonly, nonatomic) NSMutableArray *services; // ivar: _services


-(NSUInteger)count;
-(id)appLayouts;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithServices:(id)arg0 zone:(struct _NSZone *)arg1 ;
-(id)serviceAtIndex:(NSUInteger)arg0 ;
-(id)serviceBundleIdentifiers;
-(id)serviceForBundleIdentifier:(id)arg0 ;
-(void)addService:(id)arg0 ;
-(void)removeService:(id)arg0 ;


@end


#endif