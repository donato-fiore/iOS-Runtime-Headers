// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGMENUITEM_H
#define PGMENUITEM_H

@class NSString, NSDictionary;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface PGMenuItem : NSObject <BSDescriptionProviding>



@property (readonly, copy, nonatomic) id *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation; // ivar: _dictionaryRepresentation
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger identifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) NSString *title;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 action:(id)arg1 ;
-(id)initWithTitle:(id)arg0 symbolName:(id)arg1 action:(id)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)invokeAction;


@end


#endif