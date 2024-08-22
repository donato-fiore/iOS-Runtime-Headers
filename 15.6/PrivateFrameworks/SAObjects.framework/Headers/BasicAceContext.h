// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BASICACECONTEXT_H
#define BASICACECONTEXT_H

@class NSString;
@protocol AceContext;

#import <Foundation/Foundation.h>


@interface BasicAceContext : NSObject <AceContext>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedBasicAceContext;
-(Class)classWithClassName:(id)arg0 group:(id)arg1 ;
-(id)aceObjectWithDictionary:(id)arg0 ;
-(void)registerGroupAcronym:(id)arg0 forGroupWithIdentifier:(id)arg1 ;


@end


#endif