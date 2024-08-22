// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFFETCHDECLARATIONCAPABILITIESRESULTOBJECT_H
#define DMFFETCHDECLARATIONCAPABILITIESRESULTOBJECT_H

@class CATTaskResultObject, NSArray;



@interface DMFFetchDeclarationCapabilitiesResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *supportedActivations; // ivar: _supportedActivations
@property (copy, nonatomic) NSArray *supportedAssets; // ivar: _supportedAssets
@property (copy, nonatomic) NSArray *supportedCommands; // ivar: _supportedCommands
@property (copy, nonatomic) NSArray *supportedConfigurations; // ivar: _supportedConfigurations
@property (copy, nonatomic) NSArray *supportedEvents; // ivar: _supportedEvents
@property (copy, nonatomic) NSArray *supportedMessages; // ivar: _supportedMessages
@property (copy, nonatomic) NSArray *supportedPredicates; // ivar: _supportedPredicates


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif