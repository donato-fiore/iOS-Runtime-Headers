// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFERROR_H
#define MFERROR_H

@class NSError, NSMutableDictionary;



@interface MFError : NSError {
    NSMutableDictionary *_moreUserInfo;
}




+(id)errorWithDomain:(id)arg0 code:(NSInteger)arg1 localizedDescription:(id)arg2 ;
+(id)errorWithDomain:(id)arg0 code:(NSInteger)arg1 localizedDescription:(id)arg2 title:(id)arg3 userInfo:(id)arg4 ;
+(id)errorWithException:(id)arg0 ;
-(id)initWithDomain:(id)arg0 code:(NSInteger)arg1 userInfo:(id)arg2 ;
-(id)localizedDescription;
-(id)mf_moreInfo;
-(id)mf_shortDescription;
-(id)recoveryAttempter;
-(id)userInfo;
-(void)setLocalizedDescription:(id)arg0 ;
-(void)setMoreInfo:(id)arg0 ;
-(void)setShortDescription:(id)arg0 ;
-(void)setUserInfoObject:(id)arg0 forKey:(id)arg1 ;
-(void)useGenericDescription:(id)arg0 ;


@end


#endif