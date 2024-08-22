// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SWCSERVICESETTINGS_H
#define _SWCSERVICESETTINGS_H

@class NSMutableDictionary, NSDictionary;
@protocol SWCRedactedDescription, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_SWCGeneration.h"
#import "_SWCServiceSpecifier.h"

@interface _SWCServiceSettings : NSObject <SWCRedactedDescription, NSSecureCoding>

 {
    NSMutableDictionary *_dict;
    BOOL _hasChanges;
}


@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) _SWCGeneration *generation; // ivar: _generation
@property (readonly) BOOL hasChanges;
@property (readonly) _SWCServiceSpecifier *serviceSpecifier; // ivar: _serviceSpecifier


+(BOOL)removeObjectsForKeys:(id)arg0 serviceSpecifier:(id)arg1 error:(*id)arg2 ;
+(BOOL)removeObjectsForKeys:(id)arg0 serviceType:(id)arg1 error:(*id)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)notificationCenter;
+(id)serviceSettingsWithServiceSpecifier:(id)arg0 error:(*id)arg1 ;
+(void)postChangeNotificationForServiceSpecifier:(id)arg0 ;
+(void)serviceSettingsDidChange:(id)arg0 ;
-(BOOL)commitReturningError:(*id)arg0 ;
-(id)_initWithServiceSpecifier:(id)arg0 dictionary:(id)arg1 generation:(id)arg2 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)objectForKey:(id)arg0 ofClass:(Class)arg1 ;
-(id)objectForKey:(id)arg0 ofClass:(Class)arg1 valuesOfClass:(Class)arg2 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif