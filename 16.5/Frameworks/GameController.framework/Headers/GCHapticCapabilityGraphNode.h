// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCHAPTICCAPABILITYGRAPHNODE_H
#define GCHAPTICCAPABILITYGRAPHNODE_H

@class NSMutableArray, NSString;
@protocol GCJSONRepresentable;

#import <Foundation/Foundation.h>


@interface GCHapticCapabilityGraphNode : NSObject <GCJSONRepresentable>



@property (retain, nonatomic) NSMutableArray *actuators; // ivar: _actuators
@property (retain, nonatomic) NSMutableArray *children; // ivar: _children
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isExposed) BOOL exposed; // ivar: _exposed
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly) Class superclass;


-(id)initWithJSONDictionaryRepresentation:(id)arg0 ;
-(id)jsonDictionaryRepresentation;
-(void)addActuator:(id)arg0 ;
-(void)addChild:(id)arg0 ;


@end


#endif