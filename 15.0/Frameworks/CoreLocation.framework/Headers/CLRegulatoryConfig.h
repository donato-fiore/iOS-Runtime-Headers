// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLREGULATORYCONFIG_H
#define CLREGULATORYCONFIG_H


#import <Foundation/Foundation.h>


@interface CLRegulatoryConfig : NSObject {
    unique_ptr<CLRegulatoryConfigInternal, std::default_delete<CLRegulatoryConfigInternal>> _config;
}




-(BOOL)addConfigForIsoList:(id)arg0 config:(id)arg1 error:(*id)arg2 ;
-(BOOL)addConfigForRegionList:(id)arg0 config:(id)arg1 error:(*id)arg2 ;
-(BOOL)setExtendedBorderDetection:(BOOL)arg0 withExtendedDistance:(int)arg1 ;
-(id)initWithQueue:(id)arg0 defaultConfig:(id)arg1 ;
-(void)fetchConfigForLocation:(id)arg0 withReply:(id)arg1 ;
-(void)fetchInfoForLocation:(id)arg0 withReply:(id)arg1 ;


@end


#endif