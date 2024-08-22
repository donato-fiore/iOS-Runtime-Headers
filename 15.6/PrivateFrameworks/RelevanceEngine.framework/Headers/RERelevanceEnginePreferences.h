// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RERELEVANCEENGINEPREFERENCES_H
#define RERELEVANCEENGINEPREFERENCES_H

@class NSSet;
@protocol NSCopying, RERelevanceEnginePreferencesDelegate;

#import <Foundation/Foundation.h>


@interface RERelevanceEnginePreferences : NSObject <NSCopying>

 {
    id<RERelevanceEnginePreferencesDelegate> *_delegate;
}


@property (weak, nonatomic) NSObject<RERelevanceEnginePreferencesDelegate> *delegate;
@property (copy, nonatomic) NSSet *disabledDataSourceIdentifiers; // ivar: _disabledDataSourceIdentifiers
@property (nonatomic) NSUInteger mode; // ivar: _mode


+(id)defaultPreferences;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif