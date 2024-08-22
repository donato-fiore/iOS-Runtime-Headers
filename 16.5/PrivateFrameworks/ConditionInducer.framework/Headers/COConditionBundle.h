// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COCONDITIONBUNDLE_H
#define COCONDITIONBUNDLE_H

@class NSBundle;



@interface COConditionBundle : NSBundle



-(BOOL)isRunnable:(*id)arg0 ;
-(BOOL)loadAndReturnError:(*id)arg0 ;
-(Class)classNamed:(id)arg0 ;
-(Class)classNamed:(id)arg0 error:(*id)arg1 ;
-(id)conditions;
-(id)initWithURL:(id)arg0 ;


@end


#endif