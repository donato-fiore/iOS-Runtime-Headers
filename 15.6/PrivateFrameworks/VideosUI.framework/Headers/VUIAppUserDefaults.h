// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIAPPUSERDEFAULTS_H
#define VUIAPPUSERDEFAULTS_H

@class NSString;
@protocol VUIAppUserDefaultsStoring;

#import <Foundation/Foundation.h>


@interface VUIAppUserDefaults : NSObject <VUIAppUserDefaultsStoring>



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