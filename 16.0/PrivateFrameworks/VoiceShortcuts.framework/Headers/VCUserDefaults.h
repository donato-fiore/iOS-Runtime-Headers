// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCUSERDEFAULTS_H
#define VCUSERDEFAULTS_H

@class NSUserDefaults;



@interface VCUserDefaults : NSUserDefaults



+(id)sharedUserDefaults;
-(BOOL)setCodableObject:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(id)codableObjectOfClass:(Class)arg0 forKey:(id)arg1 ;


@end


#endif