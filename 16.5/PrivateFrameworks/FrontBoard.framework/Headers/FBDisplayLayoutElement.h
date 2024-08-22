// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBDISPLAYLAYOUTELEMENT_H
#define FBDISPLAYLAYOUTELEMENT_H

@class NSString, FBSDisplayLayoutElement;
@protocol BSDescriptionProviding, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "FBMainDisplayLayoutPublisher.h"

@interface FBDisplayLayoutElement : NSObject <BSDescriptionProviding>

 {
    FBMainDisplayLayoutPublisher *_publisher;
    NSString *_key;
    id<BSInvalidatable> *_activeAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger displayType; // ivar: _displayType
@property (readonly, nonatomic) FBSDisplayLayoutElement *element; // ivar: _element
@property (readonly, nonatomic) Class elementClass; // ivar: _elementClass
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithDisplayType:(NSInteger)arg0 identifier:(id)arg1 elementClass:(Class)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)activate;
-(void)activateWithBuilder:(id)arg0 ;
-(void)deactivate;
-(void)dealloc;
-(void)updateWithBuilder:(id)arg0 ;


@end


#endif