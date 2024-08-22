// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKAPPUSERDEFAULTS_H
#define IKAPPUSERDEFAULTS_H

@class NSString;
@protocol IKAppUserDefaultsStoring;

#import <Foundation/Foundation.h>


@interface IKAppUserDefaults : NSObject <IKAppUserDefaultsStoring>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedUserDefaults;
-(id)dataForKey:(id)arg0 ;
-(void)removeDataForKey:(id)arg0 ;
-(void)setData:(id)arg0 forKey:(id)arg1 ;


@end


#endif