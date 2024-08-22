// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOAVAILABLEEXPERIMENT_H
#define GEOAVAILABLEEXPERIMENT_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface GEOAvailableExperiment : NSObject

@property (readonly, nonatomic) NSArray *branches; // ivar: _branches
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *name; // ivar: _name


-(id)_branchForLabel:(id)arg0 ;
-(id)description;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 ;
-(void)_addBranch:(id)arg0 ;


@end


#endif