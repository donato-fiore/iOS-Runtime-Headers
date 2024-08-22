// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _AFAPPLICATIONCONTEXTMUTATION_H
#define _AFAPPLICATIONCONTEXTMUTATION_H

@class NSString, AceObject, NSDictionary, NSArray;
@protocol AFApplicationContextMutating;

#import <Foundation/Foundation.h>

#import "AFApplicationContext.h"
#import "AFBulletin.h"

@interface _AFApplicationContextMutation : NSObject <AFApplicationContextMutating>

 {
    AFApplicationContext *_baseModel;
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


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setAceContext:(id)arg0 ;
-(void)setAceContexts:(id)arg0 ;
-(void)setAssociatedBundleIdentifier:(id)arg0 ;
-(void)setBulletin:(id)arg0 ;
-(void)setContextDictionary:(id)arg0 ;


@end


#endif