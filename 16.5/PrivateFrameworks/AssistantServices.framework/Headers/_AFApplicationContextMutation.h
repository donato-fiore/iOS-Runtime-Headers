// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AFAPPLICATIONCONTEXTMUTATION_H
#define _AFAPPLICATIONCONTEXTMUTATION_H

@class NSString, AceObject, NSDictionary, NSArray;
@protocol AFApplicationContextMutating;

#import <Foundation/Foundation.h>

#import "AFApplicationContext.h"
#import "AFBulletin.h"

@interface _AFApplicationContextMutation : NSObject <AFApplicationContextMutating>

 {
    AFApplicationContext *_base;
    NSString *_associatedBundleIdentifier;
    AFBulletin *_bulletin;
    AceObject *_aceContext;
    NSDictionary *_contextDictionary;
    NSArray *_aceContexts;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(id)getAceContext;
-(id)getAceContexts;
-(id)getAssociatedBundleIdentifier;
-(id)getBulletin;
-(id)getContextDictionary;
-(id)initWithBase:(id)arg0 ;
-(void)setAceContext:(id)arg0 ;
-(void)setAceContexts:(id)arg0 ;
-(void)setAssociatedBundleIdentifier:(id)arg0 ;
-(void)setBulletin:(id)arg0 ;
-(void)setContextDictionary:(id)arg0 ;


@end


#endif