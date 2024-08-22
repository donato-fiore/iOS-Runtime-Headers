// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CONFIGURATIONHANDLER_H
#define CONFIGURATIONHANDLER_H

@class NSString;
@protocol ManagedEventInfoProtocol, SymptomAdditionalProtocol;

#import <Foundation/Foundation.h>


@interface ConfigurationHandler : NSObject <ManagedEventInfoProtocol, SymptomAdditionalProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)classRepresentativeForName:(id)arg0 ;
+(id)objectForName:(id)arg0 ;
+(id)sharedInstance;
+(int)configureItems:(id)arg0 ;
+(int)read:(id)arg0 returnedValues:(id)arg1 ;
+(void)dumpAll;
+(void)initialize;
+(void)setConfigurationObject:(id)arg0 forName:(id)arg1 ;
-(BOOL)noteSymptom:(id)arg0 ;
-(id)_configureBuildDetails:(id)arg0 ;
-(id)_configureHandlerClass:(id)arg0 ;
-(id)init;
-(int)configure:(id)arg0 ;
-(int)read:(id)arg0 returnedValues:(id)arg1 ;
-(void)_dumpState;
-(void)_setAnnotation:(id)arg0 ;
-(void)generateInfoForId:(NSUInteger)arg0 context:(char *)arg1 uuid:(id)arg2 completionBlock:(id)arg3 ;
-(void)setAnnotation:(id)arg0 ;


@end


#endif