// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EARARTIFACT_H
#define _EARARTIFACT_H


#import <Foundation/Foundation.h>


@interface _EARArtifact : NSObject {
    shared_ptr<quasar::artifact::Artifact> _artifact;
}




+(void)initialize;
-(BOOL)hasContent:(id)arg0 ;
-(BOOL)hasInfo:(id)arg0 ;
-(BOOL)isEquivalentTo:(id)arg0 ;
-(BOOL)isMinimalistic;
-(BOOL)supportsContent:(id)arg0 ;
-(BOOL)supportsInfo:(id)arg0 ;
-(BOOL)write:(id)arg0 ;
-(id)getContent:(id)arg0 ;
-(id)getInfo:(id)arg0 ;
-(id)getLocale;
-(id)getVersion;
-(id)initWithAcceptedContent:(id)arg0 acceptedInfo:(id)arg1 dependent:(id)arg2 ;
-(void)minimize;


@end


#endif