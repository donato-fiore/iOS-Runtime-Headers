// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALLOGCONFIGURATION_H
#define CALLOGCONFIGURATION_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface CalLogConfiguration : NSObject

@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSMutableArray *nodes; // ivar: _nodes


-(id)description;
-(id)init;
-(id)initWithDetailedDefinition:(id)arg0 ;
-(id)initWithSimpleDefinition:(id)arg0 ;
-(id)parseFilterDefinition:(id)arg0 ;
-(id)parseNodeDefinition:(id)arg0 ;
-(id)parseWriterDefinition:(id)arg0 ;
-(void)parseConfigurationDefinition:(id)arg0 ;


@end


#endif