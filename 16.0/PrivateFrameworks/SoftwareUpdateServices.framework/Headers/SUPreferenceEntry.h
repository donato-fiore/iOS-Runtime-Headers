// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUPREFERENCEENTRY_H
#define SUPREFERENCEENTRY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SUPreferenceEntry : NSObject

@property (readonly, retain, nonatomic) NSString *description; // ivar: _description
@property (readonly, retain, nonatomic) NSString *preferenceKey; // ivar: _preferenceKey
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)initWithKey:(id)arg0 type:(NSInteger)arg1 description:(id)arg2 ;


@end


#endif