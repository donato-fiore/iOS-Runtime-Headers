// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOAVAILABLEEXPERIMENTBRANCH_H
#define GEOAVAILABLEEXPERIMENTBRANCH_H

@class NSString, NSMutableArray, NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface GEOAvailableExperimentBranch : NSObject {
    NSString *_experimentIdentifier;
    NSMutableArray *_assignments;
}


@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (retain, nonatomic, getter=_clientConfig, setter=_setClientConfig:) NSArray *clientConfig; // ivar: _clientConfig
@property (readonly, nonatomic) NSDictionary *clientConfigValues;
@property (readonly, nonatomic, getter=_dictionaryRepresentation) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSString *name; // ivar: _name


-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)description;
-(id)initWithLabel:(id)arg0 name:(id)arg1 experimentIdentifier:(id)arg2 ;
-(id)querySubstringForType:(NSInteger)arg0 dispatcherRequestType:(int)arg1 ;
-(void)_addAssignment:(id)arg0 ;


@end


#endif