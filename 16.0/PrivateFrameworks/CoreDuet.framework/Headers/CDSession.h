// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDSESSION_H
#define CDSESSION_H


#import <Foundation/Foundation.h>


@interface CDSession : NSObject

@property (readonly) NSUInteger clientId; // ivar: _clientId
@property BOOL unlocked; // ivar: _unlocked


+(id)sharedSessionWithClientId:(NSUInteger)arg0 ;
-(BOOL)isClassCLocked;
-(id)attributeForName:(id)arg0 type:(NSInteger)arg1 error:(*id)arg2 ;
-(id)attributeNamesWithError:(*id)arg0 ;
-(id)budgetForName:(id)arg0 type:(NSInteger)arg1 error:(*id)arg2 ;
-(id)budgetNamesWithError:(*id)arg0 ;
-(id)getDevices;
-(id)init;
-(id)initWithClientId:(NSUInteger)arg0 ;
-(id)initWithClientId:(NSUInteger)arg0 enableCaching:(BOOL)arg1 ;
-(id)registerAttributeWithName:(id)arg0 type:(NSInteger)arg1 dataProtectionClass:(id)arg2 error:(*id)arg3 ;
-(id)representationStringFromAttribute:(id)arg0 value:(id)arg1 error:(*id)arg2 ;


@end


#endif