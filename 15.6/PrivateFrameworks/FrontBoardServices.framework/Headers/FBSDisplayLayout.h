// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSDISPLAYLAYOUT_H
#define FBSDISPLAYLAYOUT_H

@class NSString, NSArray, NSDate;
@protocol BSXPCCoding, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "FBSDisplayConfiguration.h"

@interface FBSDisplayLayout : NSObject <BSXPCCoding, BSDescriptionProviding>



@property (readonly, nonatomic) CGRect bounds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger displayBacklightLevel; // ivar: _backlightLevel
@property (retain, nonatomic) FBSDisplayConfiguration *displayConfiguration; // ivar: _displayConfiguration
@property (readonly, copy, nonatomic) NSArray *elements; // ivar: _elements
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger interfaceOrientation; // ivar: _interfaceOrientation
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDate *timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)displayType;
-(id)_initWithElements:(id)arg0 ;
-(id)addElement:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)display;
-(id)init;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct CGRect )referenceBounds;
-(void)_sortElements;
-(void)encodeWithXPCDictionary:(id)arg0 ;
-(void)finalizeLayout;
-(void)removeElement:(id)arg0 ;


@end


#endif