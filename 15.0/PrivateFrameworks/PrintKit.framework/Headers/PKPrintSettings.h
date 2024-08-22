// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPRINTSETTINGS_H
#define PKPRINTSETTINGS_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "PKPaper.h"

@interface PKPrintSettings : NSObject

@property (retain, nonatomic) NSMutableDictionary *dict; // ivar: _dict
@property (retain, nonatomic) PKPaper *paper; // ivar: paper


+(id)default;
+(id)photo;
+(id)printSettingsForPrinter:(id)arg0 ;
-(id)description;
-(id)init;
-(id)objectForKey:(id)arg0 ;
-(id)settingsDict;
-(void)dealloc;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif