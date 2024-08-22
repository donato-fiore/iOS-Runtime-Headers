// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCHAPTICCAPABILITYGRAPH_H
#define GCHAPTICCAPABILITYGRAPH_H

@class NSMutableSet, NSString, NSMutableDictionary;
@protocol NSSecureCoding, GCJSONRepresentable;

#import <Foundation/Foundation.h>


@interface GCHapticCapabilityGraph : NSObject <NSSecureCoding, GCJSONRepresentable>



@property (retain, nonatomic) NSMutableSet *allCapabilities; // ivar: _allCapabilities
@property (retain, nonatomic) NSMutableSet *allLeafCapabilities; // ivar: _allLeafCapabilities
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableSet *exposedCapabilities; // ivar: _exposedCapabilities
@property (retain, nonatomic) NSMutableSet *exposedLeafCapabilities; // ivar: _exposedLeafCapabilities
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *nodes; // ivar: _nodes
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)actuatorsForNode:(id)arg0 ;
-(id)initWithActuators:(id)arg0 nodes:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJSONDictionaryRepresentation:(id)arg0 ;
-(id)jsonDictionaryRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif