// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSLAUNCHDDOMAIN_H
#define OSLAUNCHDDOMAIN_H


#import <Foundation/Foundation.h>


@interface OSLaunchdDomain : NSObject {
    int _type;
    NSUInteger _handle;
}




+(id)createDomainForRoleAccount:(unsigned int)arg0 sessionType:(id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
+(id)currentDomain;
+(id)domainForAsid:(int)arg0 ;
+(id)domainForPid:(int)arg0 ;
+(id)domainForRoleAccountUser:(unsigned int)arg0 ;
+(id)domainForUser:(unsigned int)arg0 ;
+(id)loginwindowDomain;
+(id)systemDomain;
+(unsigned int)_createDomainOptions2flags:(NSUInteger)arg0 ;
-(BOOL)initiateRemoval:(*id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)unpendLaunches:(*id)arg0 ;
-(NSUInteger)hash;
-(id)initWithType:(int)arg0 handle:(NSUInteger)arg1 ;


@end


#endif