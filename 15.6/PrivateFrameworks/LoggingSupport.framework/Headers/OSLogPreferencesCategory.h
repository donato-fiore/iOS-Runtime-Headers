// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OSLOGPREFERENCESCATEGORY_H
#define OSLOGPREFERENCESCATEGORY_H

@class NSString;

#import <Foundation/Foundation.h>

#import "OSLogPreferencesSubsystem.h"

@interface OSLogPreferencesCategory : NSObject

@property (readonly, nonatomic) NSInteger effectiveEnabledLevel;
@property (readonly, nonatomic) NSInteger effectivePersistedLevel;
@property (nonatomic) NSInteger enabledLevel;
@property (readonly, nonatomic) BOOL isLocked;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger persistedLevel;
@property (nonatomic) BOOL signpostEnabled;
@property (nonatomic) BOOL signpostPersisted;
@property (readonly, nonatomic) OSLogPreferencesSubsystem *subsystem; // ivar: _subsystem


-(NSInteger)defaultEnabledLevel;
-(NSInteger)defaultPersistedLevel;
-(id)initWithName:(id)arg0 subsystem:(id)arg1 ;
-(void)reset;


@end


#endif